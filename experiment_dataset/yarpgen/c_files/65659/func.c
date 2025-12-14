/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65659
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)5806)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min(((short)5813), ((short)9512))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                        {
                            arr_15 [19] [i_1] [i_1] [i_1] [i_1] [13] = ((/* implicit */unsigned int) arr_9 [i_4 + 1]);
                            var_14 = ((/* implicit */int) ((short) arr_8 [i_1] [i_2] [i_3] [i_4]));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            var_15 *= ((((/* implicit */_Bool) (unsigned char)2)) ? (max((((/* implicit */int) min(((short)5806), ((short)-673)))), ((-(((/* implicit */int) arr_5 [i_0 - 1])))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(short)4])) || (((/* implicit */_Bool) var_7))))) > (((/* implicit */int) (short)-5806))))));
                            var_16 += ((/* implicit */int) (short)1535);
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((_Bool) (short)-25548)) ? (((/* implicit */int) max(((short)8732), (((/* implicit */short) ((unsigned char) (short)-5806)))))) : (arr_19 [i_0 - 1] [i_0] [(signed char)10] [(signed char)10] [i_0]))))));
                            var_18 += ((/* implicit */short) arr_3 [i_6 + 1] [(_Bool)1]);
                            var_19 = ((/* implicit */short) arr_13 [i_0 - 1] [i_3] [i_2] [i_0 - 1]);
                        }
                        var_20 ^= ((/* implicit */unsigned long long int) var_5);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        arr_25 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-5803))) ? (((/* implicit */int) ((short) arr_24 [i_0 - 1]))) : (((/* implicit */int) arr_5 [21LL]))))) : (max((((/* implicit */unsigned long long int) ((short) var_2))), (((arr_22 [i_1] [21] [i_2] [(_Bool)1] [i_1] [i_0]) << (((arr_0 [6ULL]) - (18167106178806687ULL)))))))));
                        var_21 = ((/* implicit */int) min((((/* implicit */long long int) max((((int) (unsigned char)192)), (((/* implicit */int) arr_23 [(short)20] [i_7 + 1] [i_7 - 1] [i_7 + 1]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_8 [i_7] [i_0] [i_1] [i_0])))) ? (arr_8 [14] [i_1] [14] [(_Bool)1]) : (((/* implicit */long long int) ((int) var_2)))))));
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_28 [i_1] [i_8] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) min((arr_9 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_18 [i_0] [(_Bool)1] [i_1] [11ULL] [i_2] [9LL]))))));
                        arr_29 [10] [10] [(_Bool)1] [(_Bool)1] [i_2] [(unsigned short)2] |= 1048448;
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [5LL] [i_1] [(unsigned char)6] [i_9])) ? (((/* implicit */int) (short)-8732)) : ((-2147483647 - 1))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_19 [(short)21] [i_1] [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [12ULL] [8])))))), (var_1)));
                            var_23 = ((((/* implicit */_Bool) 2U)) ? (130048) : (((/* implicit */int) (unsigned char)0)));
                            var_24 = ((/* implicit */unsigned char) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((signed char) arr_30 [i_0] [i_0] [i_0] [i_2] [i_8] [i_9 + 1])))));
                            arr_32 [i_0] [i_0] [i_9] [(_Bool)1] = ((/* implicit */int) var_7);
                        }
                        for (int i_10 = 3; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) ((int) max((((((/* implicit */_Bool) -130049)) ? (arr_22 [i_2] [i_1] [(_Bool)1] [i_8] [i_10] [i_10]) : (arr_22 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_10 - 1] [14U]))), (((/* implicit */unsigned long long int) (short)-8743)))));
                            var_26 ^= max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))), (((arr_3 [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [8] [i_1]))) : (10672726641349238995ULL))));
                            arr_35 [(short)11] [(short)11] [7] [i_10] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_22 [i_0 - 1] [i_1] [i_2] [20ULL] [i_0 - 1] [i_10 + 2]) : (arr_0 [i_0 - 1]))));
                        }
                        for (long long int i_11 = 2; i_11 < 20; i_11 += 3) 
                        {
                            var_27 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28679)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (0ULL)))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_21 [(unsigned char)21] [i_0] [i_0] [(unsigned short)7] [i_2] [i_0] [i_11])) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8732))))))));
                            arr_38 [i_2] [(short)4] [(short)4] [i_11] [i_11] [i_0] = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)43005)) : (((/* implicit */int) (short)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */int) (short)0)), (-130049))) : (((/* implicit */int) ((unsigned short) (short)-18631))))))));
                        }
                    }
                    arr_39 [i_0] [i_0 - 1] [10] [i_2] = (-(((((/* implicit */int) ((short) 1074410941))) >> (((((((/* implicit */int) var_4)) ^ (130048))) - (130024))))));
                }
            } 
        } 
    } 
    var_28 = var_5;
}
