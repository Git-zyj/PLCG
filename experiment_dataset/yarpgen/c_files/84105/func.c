/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84105
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_7) % ((~(var_10)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_1])) >> (((((arr_4 [i_0]) >> (((((/* implicit */int) var_6)) - (64549))))) - (1092541054330ULL)))));
            var_18 = ((/* implicit */short) ((unsigned char) (signed char)53));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 2654660358U))));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_20 = ((((2543962665U) != (16777215U))) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3] [i_0 - 2])) : (((unsigned long long int) var_11)));
                var_21 -= ((/* implicit */unsigned long long int) ((arr_8 [i_0 + 1] [i_2] [i_0 - 2] [(unsigned short)1]) <= (arr_8 [i_0] [i_0 + 1] [i_2] [i_3])));
                var_22 -= ((/* implicit */unsigned short) (short)7352);
                var_23 = ((_Bool) var_9);
                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_10 [i_0 - 1] [(unsigned short)10] [i_3])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_3]))))));
            }
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_25 = ((/* implicit */signed char) arr_7 [i_0 + 1] [i_0] [i_0] [i_0 - 1]);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_4]))) : (8967981696483832LL)));
                var_27 = ((/* implicit */unsigned short) arr_4 [(unsigned char)4]);
            }
            var_28 = ((/* implicit */unsigned char) ((short) arr_3 [i_0 - 2] [i_2] [i_0 - 2]));
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) 317271770779204261ULL);
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            var_29 = ((/* implicit */short) var_13);
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
        }
        var_31 -= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
    }
    for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        var_32 = ((unsigned short) (-(((/* implicit */int) (short)7358))));
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_7))));
    }
    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_34 = max((min((max((8605044926019571371LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_20 [i_7])))), (((((arr_21 [18ULL] [i_7]) << (((var_10) - (7208597985094183870LL))))) % (var_5))));
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26930)))))) <= (((arr_21 [i_7] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_36 -= ((/* implicit */unsigned short) (-(var_10)));
    var_37 = ((/* implicit */unsigned long long int) min(((-((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_6))));
    var_38 -= ((/* implicit */short) ((unsigned long long int) ((short) var_8)));
}
