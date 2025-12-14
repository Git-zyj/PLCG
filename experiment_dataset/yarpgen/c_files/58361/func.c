/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58361
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_1 [i_0 - 1]))))), (max((((/* implicit */long long int) arr_0 [i_0 + 1])), (var_5)))));
        var_13 = var_10;
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_14 |= min(((+((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))), (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)95)))), (((int) 65024U))))));
            arr_5 [i_0 - 1] [(short)9] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2]))) >= (max((4294902268U), (((/* implicit */unsigned int) (unsigned short)9794))))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)20])))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) (unsigned char)214))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
            {
                arr_14 [i_3] [i_2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) arr_3 [i_0 + 2])))))), (((/* implicit */int) min((arr_3 [i_0 - 1]), (((/* implicit */unsigned char) var_9)))))));
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(65005U)))), (18446744073709551615ULL)));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2]))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_10)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)21])))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            arr_21 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(_Bool)1] [i_5] [i_6] [i_4])) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) 4294902263U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_11))))))));
                            var_19 = ((/* implicit */signed char) 4917460340312739354ULL);
                            arr_22 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) var_12))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1]))));
            }
        }
        for (short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
        {
            arr_26 [i_7] [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((4191902827599727915ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_2)))))))));
            arr_27 [i_0] [i_7] [(short)19] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_0 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7]))) / (4294902265U)))));
        }
    }
    var_21 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) + (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) ((short) (_Bool)1))))))));
}
