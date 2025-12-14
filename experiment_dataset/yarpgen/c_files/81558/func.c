/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81558
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2147483647) & (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) arr_0 [(signed char)6]);
                            var_15 = ((/* implicit */unsigned long long int) (~(arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] [i_4])));
                            var_16 = ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_4] [i_4]))));
                            var_17 = (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_13)))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((arr_7 [i_5]) >= (arr_7 [i_0])));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [(unsigned short)9]))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(-1594546361)))) ? (((arr_4 [i_0] [i_2] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1]) : (arr_17 [i_2] [i_2] [i_2] [10] [i_2]))) : (((/* implicit */unsigned long long int) ((2147483646) ^ (((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_21 -= ((/* implicit */unsigned short) max(((-2147483647 - 1)), ((-(((/* implicit */int) ((_Bool) 2147483638)))))));
                        var_22 += ((unsigned short) ((arr_17 [i_0] [i_0] [4U] [(_Bool)1] [i_6]) - (arr_17 [i_0] [(_Bool)1] [(short)10] [i_0] [15ULL])));
                        arr_19 [i_0] [(_Bool)1] [i_0] [i_1] = (-(((/* implicit */int) max(((unsigned short)57861), (((/* implicit */unsigned short) (_Bool)1))))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        var_23 -= ((/* implicit */_Bool) var_8);
                        arr_24 [i_0] [i_0] [i_1] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) 3005389498U)), (15511615091032304878ULL)))));
                    }
                    arr_25 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_1])), (var_3)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [8] [i_1] [12LL] [(short)7])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0])))))) - ((+(((int) var_6))))));
                    var_24 = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */int) ((short) arr_9 [i_0] [(unsigned short)5] [i_1] [i_0] [i_0]))) : (((((int) var_2)) - (((/* implicit */int) arr_23 [i_2] [i_1] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_13)) : (max((((/* implicit */unsigned long long int) arr_0 [i_8])), (arr_18 [i_0] [i_1] [i_1] [i_2] [i_8] [i_9])))))) ? ((-(var_13))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_0)))))))))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))), (max((arr_9 [(short)16] [i_1] [i_0] [i_8] [i_9]), (((/* implicit */unsigned int) arr_12 [i_0] [(_Bool)1] [i_2] [(unsigned short)0] [i_9])))))))))));
                                var_27 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [7U] [7U] [7U] [i_0]))))) ? (((2147483647) & (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) arr_22 [9ULL] [i_0]))))))), (min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_22 [i_2] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_1)), (var_5))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_0)), (var_3))))))) - (((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)65535))))))))));
    var_29 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (((unsigned int) var_13))))) ? (var_7) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-28118)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((short) var_12)))))));
    var_30 &= var_6;
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        for (signed char i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 24; i_13 += 4) 
                    {
                        arr_42 [(_Bool)1] [i_11 + 3] [18ULL] [i_10] [i_13] [i_13] &= ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + ((+(var_6))))));
                        arr_43 [i_10] = ((/* implicit */int) var_5);
                        arr_44 [i_13] [i_13] [i_12] [i_11 + 4] [i_11 - 1] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) arr_33 [i_10])))) + (((/* implicit */int) ((((/* implicit */int) arr_37 [i_11 + 1])) == (((/* implicit */int) ((_Bool) arr_41 [i_13 - 1] [i_13] [i_13] [i_13]))))))));
                    }
                    var_31 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_41 [i_11 + 3] [i_10] [i_12] [i_11 - 1])) ? (((/* implicit */int) arr_41 [i_11 + 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_41 [i_11 + 4] [i_11 + 4] [i_12] [i_11 + 3])))), ((~(((/* implicit */int) arr_41 [i_11 + 2] [i_11] [i_11 + 2] [i_12]))))));
                }
            } 
        } 
    } 
}
