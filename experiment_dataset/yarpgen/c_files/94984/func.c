/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94984
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
    var_18 = ((/* implicit */short) min((var_11), (((/* implicit */unsigned int) ((unsigned char) (-(var_17)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 6; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (1516703949)))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : ((-(((/* implicit */int) var_15))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_1 + 1]))));
                }
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (var_17) : (536870911)))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_1 - 3] [i_0])) < (((/* implicit */int) (short)-1765))))) : (((/* implicit */int) (unsigned char)0))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) var_0))))))))))));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0 - 1] [i_0 + 2] [i_0 + 2]))) ? (((unsigned long long int) (short)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-17)) && (((/* implicit */_Bool) (short)27471))))))));
                    var_21 += ((/* implicit */_Bool) (-(((/* implicit */int) (short)22009))));
                    var_22 ^= ((/* implicit */long long int) (-(var_1)));
                }
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    var_23 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) (short)-27471))));
                    arr_14 [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [i_0] [i_0])))) | (((/* implicit */int) arr_10 [i_1] [i_1 - 2] [(unsigned char)8]))))) ? (var_1) : ((-(((/* implicit */int) (unsigned char)0))))));
                    var_24 = ((/* implicit */int) (short)-29294);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_6 [i_0] [i_1 + 1] [i_4] [(unsigned char)4]))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)27471)) : (((/* implicit */int) (unsigned char)176)))))));
                }
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)250)))))) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))));
                                arr_21 [i_6] [i_5] = ((/* implicit */short) arr_1 [i_5]);
                                var_27 = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */int) arr_10 [i_1] [i_1 + 2] [i_1]);
                                arr_27 [i_0 + 2] [i_1 + 3] [i_5] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -818314451)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((unsigned int) (short)27465))));
                                arr_28 [i_0] [i_0] [i_0] [(unsigned char)6] [i_8] [i_9] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_5] [i_8] [i_8])), (arr_23 [i_9] [i_5] [i_5] [i_1])))) : (((/* implicit */int) (unsigned char)134)))));
                            }
                        } 
                    } 
                    var_29 = ((unsigned int) ((1152780767118491648LL) ^ (((/* implicit */long long int) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_5]))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            {
                                arr_35 [i_0] [0U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_26 [i_1 - 3]))))) ? (((/* implicit */long long int) ((int) (-(((/* implicit */int) (unsigned char)6)))))) : (max((((/* implicit */long long int) var_5)), (arr_6 [i_5] [i_0 - 1] [i_10] [i_1 + 1])))));
                                arr_36 [(_Bool)1] [i_11] [i_5] [i_10] [i_11] = ((min((((/* implicit */int) (unsigned char)242)), ((-2147483647 - 1)))) % (446166957));
                                arr_37 [i_11] [i_10] [i_5] [8U] [i_0] = ((/* implicit */int) ((arr_17 [i_0] [i_1] [i_5] [i_10] [i_10]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)27487)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_15 [i_0 + 2] [i_1 + 3])) : (arr_29 [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))) : (arr_22 [i_0] [i_0 + 2] [i_0] [i_0 - 1])));
                                arr_38 [i_0 - 1] [i_1] [i_5] [i_10] [i_11] [(unsigned char)9] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)255))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)5)) : (-783280517))) : (((((((/* implicit */_Bool) 2146435072)) ? (((/* implicit */int) (short)14813)) : (((/* implicit */int) var_12)))) + (((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) (signed char)-127)))))))));
                            }
                        } 
                    } 
                    arr_39 [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                }
                arr_40 [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) ((long long int) 1048575));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-((-(((/* implicit */int) min((((/* implicit */short) var_0)), (var_13)))))))))));
            }
        } 
    } 
}
