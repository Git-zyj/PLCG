/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70139
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
    var_15 &= ((/* implicit */_Bool) var_12);
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_11);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (15U))), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) ? (var_6) : (((/* implicit */int) var_1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = (((((~(((/* implicit */int) (short)32757)))) ^ (arr_0 [i_1]))) | (((/* implicit */int) var_7)));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)32737)) : ((+((-(var_8)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(var_9))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1]) <= (((/* implicit */int) var_2)))))))))));
        var_19 = ((/* implicit */int) var_10);
        arr_7 [i_1] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (-(1256982486U)))) % ((+(var_12))))) == (((/* implicit */unsigned long long int) max(((-(554256995))), (((/* implicit */int) arr_2 [i_2])))))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (short)32737)) : (-554256995))))));
        var_21 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_14 [i_3] |= ((/* implicit */_Bool) (short)32760);
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_3]) : (((/* implicit */int) var_11))))) : (17175443140520550715ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */short) var_11))))))))));
            arr_18 [i_3] = var_5;
            var_23 = (-((+(1575327516))));
            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3147419080U)) ? (1073741824) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32737))))));
        }
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_22 [i_3] [i_5] &= ((/* implicit */unsigned long long int) var_14);
            var_25 *= ((/* implicit */_Bool) min(((-(((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((var_2), (((/* implicit */short) var_0))))) : (((/* implicit */int) (!(var_4)))))))));
            var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741837)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)17808))))))) ? ((+(max((((/* implicit */unsigned int) arr_9 [i_3])), (var_13))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))), (((var_5) ? (var_8) : (((/* implicit */int) var_7)))))))));
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) arr_13 [i_6]);
            arr_25 [i_3] [i_6] [i_3] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_2)))), (((/* implicit */int) (short)11931))))) ? (((((/* implicit */_Bool) 4276371692U)) ? (1073741838) : (((/* implicit */int) (_Bool)1)))) : (min((var_6), (((/* implicit */int) var_1)))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_11)) / (-1073741836)))))) ? (var_9) : (((/* implicit */unsigned long long int) min((153626990), ((+(((/* implicit */int) arr_5 [i_3])))))))));
            var_29 = (!(var_4));
        }
    }
    var_30 = ((/* implicit */int) var_13);
}
