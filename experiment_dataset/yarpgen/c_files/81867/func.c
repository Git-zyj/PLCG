/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81867
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [(_Bool)1])))))));
                    var_17 &= ((/* implicit */unsigned short) max((min((var_10), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)0))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1114912386)), (18446744073709551608ULL)));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) var_15);
                                arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((max((var_12), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (_Bool)1)))))) * (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) & (arr_8 [i_0] [i_0])))))));
                            }
                            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                            {
                                arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_6)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_20 [i_0] [i_0] [i_3 + 2] [(_Bool)1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_18 [i_0] [i_1] [12ULL] [i_4] [i_4 - 1]))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_20 = ((/* implicit */int) ((arr_8 [i_0] [i_0]) ^ (arr_8 [i_3 - 1] [i_7])));
                                arr_24 [i_1] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                            arr_25 [i_0] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_1])))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] = (_Bool)1;
                            var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)4] [(unsigned char)4])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_1))), (((/* implicit */long long int) min((arr_23 [(short)18] [i_1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (((/* implicit */int) arr_22 [i_8]))))))) & ((~(((arr_4 [(unsigned short)6]) / (((/* implicit */long long int) var_15))))))))));
                    var_23 -= ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_4 [18LL]))))), (min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_8])), (arr_8 [i_0] [i_0]))))), (((/* implicit */long long int) (_Bool)1))));
                }
                for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    var_24 = ((/* implicit */int) ((10460066962603696751ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_25 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (max((((/* implicit */long long int) 1114912386)), (arr_8 [i_0] [i_0]))));
                    var_26 = ((/* implicit */short) var_8);
                    var_27 = ((/* implicit */long long int) max((arr_23 [i_1] [20LL] [i_0] [i_1] [i_9 + 3]), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
                }
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_8))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) var_6);
    var_30 = ((/* implicit */unsigned char) min((var_6), (-170037847811313916LL)));
}
