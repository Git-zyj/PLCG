/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87399
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((unsigned int) arr_3 [i_0] [i_0] [i_1])), (((/* implicit */unsigned int) (signed char)-22))))), (((var_8) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (1734389669195474979LL))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-15276))))) / (max((33554431U), (((/* implicit */unsigned int) var_11))))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) var_0)) ? (((-7616749890432996569LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_20 *= ((/* implicit */unsigned short) min((arr_5 [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned long long int) 5021660384450391750LL))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4261412864U))))), (((((/* implicit */_Bool) 3986822248U)) ? (11799072798642179576ULL) : (((/* implicit */unsigned long long int) var_7))))));
                            var_22 = ((/* implicit */unsigned short) (-((-(var_3)))));
                            var_23 = ((/* implicit */unsigned short) max((3986822254U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16)))))));
                        }
                    } 
                } 
                var_24 |= var_11;
                var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4261412864U)) / (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((3260486744154827003ULL) >> (((308145055U) - (308145038U))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27299)))));
            }
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32756))) : (((((/* implicit */_Bool) -165774390974016449LL)) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))));
                    var_27 = (!((!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 2503869364U)))))));
                    var_28 = ((/* implicit */short) (unsigned char)4);
                    var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (33554433U)));
                }
                var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-18))))), ((unsigned char)217)));
            }
        }
        var_31 = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_32 = ((/* implicit */unsigned long long int) (unsigned short)2047);
        var_33 = ((/* implicit */unsigned char) ((5687738163480768921ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61259))) : (arr_14 [i_7] [(_Bool)1] [i_7]))))));
        var_34 |= ((/* implicit */_Bool) var_2);
        var_35 ^= ((/* implicit */_Bool) (+((-2147483647 - 1))));
    }
    var_36 -= ((/* implicit */_Bool) var_11);
}
