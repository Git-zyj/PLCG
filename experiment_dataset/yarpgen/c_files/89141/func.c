/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89141
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0 - 3] [i_0 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (var_6) : (((/* implicit */unsigned long long int) var_3))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_2 + 1] [i_0 - 3]), (arr_0 [i_2 + 2] [i_0 - 2]))))) / (min((((/* implicit */long long int) arr_3 [i_2 + 2])), (var_12)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (1229616712U)));
                var_18 -= ((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (var_6))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */short) var_0);
                                var_21 = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_5] [i_4] [i_3]))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (int i_10 = 1; i_10 < 20; i_10 += 2) 
                        {
                            {
                                arr_31 [i_10] [i_4] [i_9] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_4] [i_8] [i_9] [i_9]))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((-271040218) == (728320642)))))));
                                var_23 = ((/* implicit */signed char) var_13);
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-271040207)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)32739), (((/* implicit */unsigned short) arr_17 [i_3] [i_9])))))) : (5505589273056129294ULL)));
                                arr_32 [i_3] [i_9] [i_3] [i_9] [i_3] = ((/* implicit */unsigned char) arr_9 [i_3]);
                                var_25 = ((/* implicit */signed char) arr_21 [i_3]);
                            }
                        } 
                    } 
                    arr_33 [i_3] = ((/* implicit */short) var_0);
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_7))));
                    arr_34 [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))), (((/* implicit */long long int) ((short) arr_15 [i_3] [(unsigned char)1])))));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_4] [i_8] [i_8])) <= (((/* implicit */int) arr_17 [i_4] [i_3]))))), (((((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_3] [i_3]))))) ? (arr_28 [i_3] [i_4] [i_4] [(unsigned short)18] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_3] [i_3])), (var_10))))))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_3] [i_4]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_3] [i_3] [i_13]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_13 [i_4])))))))) ? ((~(-271040207))) : (max((arr_29 [i_3] [i_3] [i_11] [i_4] [i_3]), (arr_29 [i_3] [16] [i_3] [i_3] [i_3])))));
                                arr_43 [i_3] [i_4] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */long long int) max((-271040218), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [i_3] [i_3])))) > (max((arr_8 [i_3]), (var_3))))))));
                                var_29 = ((/* implicit */unsigned long long int) arr_28 [i_3] [i_4] [i_11] [i_12] [10LL]);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_18 [i_3] [i_4] [i_4]))))));
                    var_31 += ((/* implicit */long long int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_24 [i_4] [i_3] [i_3] [i_3] [i_4] [18ULL])), (var_1))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_11])))))))))));
                    var_32 = ((/* implicit */short) arr_35 [i_11] [i_3] [i_3]);
                    var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max(((unsigned short)15), ((unsigned short)32256)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (arr_12 [i_4] [i_11])))));
                }
                arr_44 [i_3] [i_3] [i_4] = ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) 271040226)), (9223372036854775807LL))) / (max((((/* implicit */long long int) arr_1 [i_4] [i_3])), (var_12))))))));
            }
        } 
    } 
}
