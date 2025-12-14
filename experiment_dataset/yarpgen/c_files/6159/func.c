/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6159
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) var_17);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */long long int) max((((short) min((arr_4 [i_0] [i_1] [i_3]), (((/* implicit */unsigned int) arr_9 [i_0] [i_3] [i_0] [i_0]))))), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 2] [i_3] [i_1 - 2] [i_1] [i_1]))) == (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))))));
                            arr_13 [i_2] [i_1] = ((/* implicit */_Bool) var_3);
                            var_20 ^= ((/* implicit */signed char) ((unsigned char) var_7));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_3))));
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!((_Bool)1)))), (var_14)));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 += arr_1 [i_4];
        arr_17 [i_4] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)3))));
        arr_18 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-11)), (arr_4 [i_4] [i_4] [i_4])))) && (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) || (((/* implicit */_Bool) arr_8 [i_4] [i_4])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (((var_0) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (short)-15432)) : (((/* implicit */int) (_Bool)0))))))) : (max((((/* implicit */long long int) var_2)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_15)))))));
        arr_19 [i_4] = ((/* implicit */short) max(((((~(((/* implicit */int) var_6)))) < (min((-1169829431), (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4])))))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_4] [i_4])))))))));
    }
    var_24 |= ((/* implicit */long long int) var_11);
}
