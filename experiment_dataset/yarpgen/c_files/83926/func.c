/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83926
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
    var_18 -= ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) max((max(((+(var_8))), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_3)))))));
                var_20 |= ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((((/* implicit */int) var_14)) >= (var_10)))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (arr_4 [8ULL] [8ULL])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((var_22), (var_10)));
                            var_23 += ((/* implicit */unsigned char) ((var_6) ? ((~(arr_2 [i_1 + 2] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_2))));
                            var_25 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_14)))))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [8ULL] [i_2]))))))), (((((/* implicit */_Bool) var_8)) ? (var_5) : (18152150070887256652ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), ((((!(((/* implicit */_Bool) arr_12 [i_4 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) var_17)) % (16634231681473562146ULL))))), (var_8))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1]))) * (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */unsigned long long int) -5)) : (294594002822294934ULL)))));
                    var_29 -= ((/* implicit */unsigned int) (~(arr_17 [i_6 + 1] [10LL] [i_4 + 1])));
                    var_30 = ((arr_12 [i_4 + 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        for (int i_8 = 2; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) arr_18 [i_4] [i_5] [i_6] [(unsigned short)3]);
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (-(1812512392235989470ULL))))));
                                var_33 = ((/* implicit */long long int) 1023);
                                var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    var_35 = ((/* implicit */_Bool) min((var_35), (((((/* implicit */long long int) arr_26 [i_4] [i_5])) < (0LL)))));
                    var_36 -= ((/* implicit */signed char) ((294594002822294972ULL) <= (((/* implicit */unsigned long long int) 0LL))));
                }
                var_37 *= ((/* implicit */unsigned long long int) (unsigned char)180);
            }
        } 
    } 
    var_38 = ((((/* implicit */_Bool) 0U)) ? (3305845096862381241LL) : (((/* implicit */long long int) 19U)));
    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_3))));
}
