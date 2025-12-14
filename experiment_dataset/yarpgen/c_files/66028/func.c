/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66028
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
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_5))))))), ((+((-(((/* implicit */int) var_8))))))));
    var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42957)) ? (1) : (((/* implicit */int) (unsigned short)53946))))))) ? (((min((((/* implicit */long long int) var_5)), (3107844409667330132LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)32429)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_5 [i_1] [i_1 - 1] [(_Bool)1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0 - 4] [i_1 + 1]))) == (var_3)))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 + 1])) - (((/* implicit */int) arr_9 [i_0 + 1]))));
                        var_16 = ((/* implicit */long long int) arr_7 [i_0] [i_1 + 1] [i_0]);
                    }
                } 
            } 
            var_17 -= ((/* implicit */signed char) (((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [20LL] [(unsigned short)2] [20LL]))) : (16U))))) << (((/* implicit */int) (_Bool)1))));
        }
        arr_12 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned short)12] [(unsigned short)12] [(unsigned short)20])) & (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [(unsigned short)0] [i_0 - 2] [i_0 - 4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [10LL] [8LL] [10LL]))) : (arr_1 [i_0 - 2])));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_18 *= ((/* implicit */int) ((((-3107844409667330127LL) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [22] [i_4] [i_4]))))) == (((/* implicit */long long int) (+(88376368))))));
        var_19 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_4]))) : (63488U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 363770555804111163LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))), (((/* implicit */int) (signed char)(-127 - 1))));
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (363770555804111177LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (((3249831339U) | (4294967281U))))), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_4] [i_4] [(_Bool)1] [i_4] [i_4])), (arr_9 [16U])))) <= (((/* implicit */int) arr_8 [i_4])))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3095)) ? (((/* implicit */int) ((_Bool) 3176330522U))) : (-587720417)))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_10)))))) : (((/* implicit */int) var_9))));
}
