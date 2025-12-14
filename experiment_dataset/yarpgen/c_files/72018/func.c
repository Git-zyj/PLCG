/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72018
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = (-((-(arr_1 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) arr_1 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_1 - 1])) <= (((/* implicit */int) arr_0 [i_1 - 2])))) ? (((unsigned int) arr_1 [i_1 - 2] [i_1 - 2])) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
            arr_7 [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) (-(arr_2 [i_1])))) + (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_7)))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) && (((/* implicit */_Bool) arr_0 [i_1 - 2]))))) * (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2147483647))))))))));
        }
        for (signed char i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (~(33554368U)));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (arr_5 [i_4]) : (arr_12 [i_4] [i_3] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!((_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3846512661U)) || (((1152640029630136320LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4261412928U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)12))))) < (arr_2 [i_4]))))));
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (arr_11 [i_2] [i_2] [i_2])))) ? (min((var_7), (((/* implicit */unsigned long long int) 255LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1433011439U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) : (3041372943U))))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                arr_22 [i_0] = ((/* implicit */unsigned long long int) 1152640029630136320LL);
                arr_23 [i_0] [(_Bool)1] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2 - 2] [i_2 + 1] [i_2 - 1]))))) : ((~(((/* implicit */int) (_Bool)0))))));
            }
        }
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_18)), (15063934557858789964ULL))))));
}
