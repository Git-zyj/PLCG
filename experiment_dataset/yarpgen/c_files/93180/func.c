/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93180
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))));
    var_14 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (var_7))))))), (min((((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_6))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_1)), (arr_5 [i_0] [i_0] [13ULL])))))) ? (((unsigned int) (-(((/* implicit */int) arr_3 [i_3 - 2]))))) : (var_9)));
                            var_17 -= ((/* implicit */unsigned long long int) (~(arr_9 [i_0] [10U] [i_2])));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_3])))) ? ((-(arr_7 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max(((~(((/* implicit */int) arr_3 [14])))), (var_1)))), ((~(min((arr_5 [i_0] [(short)13] [i_0]), (arr_0 [i_0])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_17 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_16 [i_4 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])))))));
                            arr_18 [i_0] [i_0] [13] [i_0] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_1) : (arr_6 [i_0] [(short)10]))) < ((-(((/* implicit */int) arr_3 [i_4]))))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) var_1)) + (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(var_3)))))) : ((+(arr_1 [i_0])))));
                            arr_20 [i_0] [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_2 [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) ((-30) >= (541539481)))))));
                            var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)-35))))) : (min((3296240748U), (((/* implicit */unsigned int) -1523039684)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */int) (short)32752)) + (((/* implicit */int) (signed char)-116))))), (var_12))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (var_2)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_8)) : (var_3)))))));
    /* LoopNest 3 */
    for (long long int i_6 = 4; i_6 < 16; i_6 += 3) 
    {
        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        var_22 -= ((/* implicit */int) (((!(((/* implicit */_Bool) (~(16536644047924966009ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))) : (((((/* implicit */_Bool) arr_22 [8ULL] [8ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))));
                        var_23 *= (!(((/* implicit */_Bool) max((6244293371114000272LL), (((/* implicit */long long int) (signed char)55))))));
                        arr_29 [i_6] [i_8] [i_7] [i_6] = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_6])) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_7]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_7 + 2])))))), (var_1)));
                        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_27 [i_6] [i_7 - 1] [12ULL] [i_8 + 2])) | (((/* implicit */int) arr_27 [i_7] [i_7 - 1] [i_7] [i_8 + 2]))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_34 [i_6] [i_8 - 1] [i_7] [i_6] = ((((/* implicit */_Bool) arr_33 [i_6 - 3] [i_7 - 1] [i_7 - 1] [i_6] [i_6] [i_10])) ? (((((/* implicit */_Bool) (signed char)114)) ? (arr_31 [i_8]) : (var_7))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))));
                        var_25 = ((/* implicit */long long int) -541539498);
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [(unsigned char)10] [i_7] [4ULL] [(unsigned char)16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6] [4LL] [2U] [16U] [i_10] [i_7 + 1]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_27 [i_10] [(_Bool)1] [i_7 + 1] [i_6 - 1])) : (((/* implicit */int) var_5)))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_37 [i_6] [i_7] [i_6] [i_11] = ((/* implicit */_Bool) (unsigned char)53);
                        var_27 -= ((/* implicit */unsigned char) (~(arr_33 [i_6] [i_6] [i_6] [(unsigned char)10] [i_6 - 2] [i_7 - 1])));
                        var_28 *= ((/* implicit */unsigned char) arr_36 [i_8] [i_8 - 1] [i_8] [i_8 + 1]);
                        var_29 = ((/* implicit */unsigned char) (-(arr_31 [i_7 + 1])));
                    }
                    arr_38 [i_6] [i_7] [i_8 - 1] = ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (signed char)126)) : (-2147483639)))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) arr_33 [i_6] [(unsigned char)1] [i_6] [i_6] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_21 [i_7 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    arr_39 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_6 - 1] [i_6 - 2])) ? (((((/* implicit */_Bool) arr_35 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_6 - 1] [i_6 - 2])) ? (((/* implicit */long long int) var_11)) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_35 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_6 - 4] [i_6 - 3]), (arr_35 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_6 - 4] [i_6 - 2])))))));
                    var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-116)) : (((((/* implicit */_Bool) -1000330222)) ? (980140330) : (-1523039695)))))));
                }
            } 
        } 
    } 
}
