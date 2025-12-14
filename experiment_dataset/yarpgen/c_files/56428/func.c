/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56428
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_0 [2LL] [2LL]))));
                arr_6 [i_0] [10U] |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)2] [i_1])) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)6] [(unsigned char)6]))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_0 [i_1] [i_2])))));
                    var_21 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)175)), (12756301659520536060ULL)));
                }
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) arr_14 [i_0] [i_3 - 1] [i_3] [i_1] [i_3] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_3 - 1] [i_0] [(short)2] [i_3 - 1] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_5])))))));
                            var_24 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (arr_1 [i_3 - 1]));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)183)) << (((((/* implicit */int) (unsigned char)238)) - (225))))))));
                            arr_17 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (signed char)115)))))));
                            arr_18 [10U] [i_0] [10] [i_4] [10U] = ((/* implicit */signed char) (-(17725702620074743467ULL)));
                        }
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-70)) ? (arr_13 [i_6] [i_3 - 1] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_3 - 2])))));
                        var_26 = ((/* implicit */int) arr_22 [i_0] [(short)0] [7U] [(signed char)1] [i_0]);
                    }
                    var_27 -= (signed char)16;
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-66));
                                arr_30 [i_3] [i_0] [i_3] [i_0] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_3 - 1])));
                                var_29 += ((/* implicit */unsigned char) -1635942992692244399LL);
                                arr_31 [7U] [i_0] [(signed char)8] [i_7] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (min((((/* implicit */unsigned long long int) (unsigned char)220)), (721041453634808148ULL)))));
                var_31 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((var_1) + (2711414173U)))))));
            }
        } 
    } 
    var_32 += ((/* implicit */unsigned long long int) (+(261120U)));
    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((short) var_6))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_8)))))));
}
