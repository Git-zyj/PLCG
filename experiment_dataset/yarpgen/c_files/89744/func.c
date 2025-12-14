/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89744
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (min((((/* implicit */int) var_10)), ((~(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) var_7)))))), (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) var_8))))));
            /* LoopNest 3 */
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [(unsigned short)16])))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (_Bool)1)))))))))));
                            var_21 ^= (+(((/* implicit */int) max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (1098974756864ULL)))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((arr_3 [i_1] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-4117861869698855008LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))))))));
        }
        arr_14 [5LL] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-912074945683075593LL)))))) ? (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_23 = min((((((/* implicit */_Bool) (short)22517)) && (((/* implicit */_Bool) 2379126197U)))), (((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] [i_0]))) == (((/* implicit */long long int) (~(((/* implicit */int) var_16))))))));
        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)201))))));
    }
}
