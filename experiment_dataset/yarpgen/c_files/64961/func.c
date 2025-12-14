/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64961
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
    var_17 = var_7;
    var_18 = ((/* implicit */unsigned char) var_13);
    var_19 = ((/* implicit */unsigned short) ((unsigned char) max((max((((/* implicit */short) (signed char)19)), ((short)-32755))), (((/* implicit */short) ((unsigned char) (unsigned short)49469))))));
    var_20 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_15);
                var_21 = ((/* implicit */unsigned short) (+(549755813887LL)));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])), (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_5)) + (109)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */int) var_0);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            var_24 ^= ((/* implicit */unsigned int) var_5);
                            var_25 -= ((/* implicit */unsigned int) var_11);
                        }
                        for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_16 [i_1 + 1] [(_Bool)1]), (arr_16 [i_1 - 1] [i_1 - 1])))) + (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_10)) : (207025842)))));
                            arr_18 [i_0] [i_0] [i_0] [(short)13] [(signed char)0] = ((/* implicit */long long int) var_0);
                        }
                        var_27 = ((/* implicit */short) min((((unsigned char) min((((/* implicit */signed char) var_11)), (var_7)))), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-32757)) == (((/* implicit */int) (_Bool)0)))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32756)) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((arr_1 [i_3]) - (2674434256U))))))));
                        var_29 = ((/* implicit */short) var_8);
                    }
                    var_30 = ((/* implicit */long long int) min((max((max((arr_8 [1] [(unsigned short)0] [i_0]), (((/* implicit */unsigned int) (signed char)-19)))), (min((arr_1 [(short)22]), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) var_10))));
                    arr_19 [(signed char)7] [i_1] [(unsigned char)10] [i_1] = ((/* implicit */unsigned short) arr_13 [8ULL] [i_2]);
                }
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    arr_23 [i_6] = ((/* implicit */signed char) (((((_Bool)1) ? (max((((/* implicit */unsigned long long int) var_16)), (9007199254740991ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                }
            }
        } 
    } 
}
