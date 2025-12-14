/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97667
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_10 = ((/* implicit */int) min((var_10), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) -1567195900)))))))));
            var_11 = ((/* implicit */short) ((((((/* implicit */int) (short)-10219)) % (920818347))) / (((/* implicit */int) var_6))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_12 |= ((/* implicit */signed char) 33554368LL);
            var_13 = ((/* implicit */signed char) max(((-(((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) (unsigned char)81))));
            var_14 = ((/* implicit */unsigned short) (short)-28648);
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_4] [i_4] [i_0 + 1] [i_2] = ((((/* implicit */_Bool) (((_Bool)1) ? (3751845971941049269LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_15 [i_0] [i_2] [11U] [i_4] [11U] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)70)) & (((/* implicit */int) var_5)))) | (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 13516930200001511618ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) - ((((-(12589555113501316761ULL))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
        }
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)13)) - (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_4)))))))));
    }
    for (signed char i_6 = 2; i_6 < 9; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)28))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_6 [i_6] [i_6] [(short)9]), (arr_6 [(unsigned char)0] [15] [i_6 - 2])))) & (((((/* implicit */int) arr_4 [12U] [i_6])) & (((/* implicit */int) arr_4 [i_6 + 2] [i_6 + 1]))))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_1))) + (max((((/* implicit */unsigned long long int) var_9)), (72057593501057024ULL)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_6] [i_6])) + (((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) (unsigned short)62087)) ? (7ULL) : (((/* implicit */unsigned long long int) 7334404833457989176LL)))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)25714)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))))));
        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_2)))) ? ((-(var_1))) : (var_1)))));
    }
    var_20 -= ((/* implicit */_Bool) var_4);
    var_21 = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) min((var_3), (var_8)))) << (((4563313027191273540LL) - (4563313027191273532LL)))))));
}
