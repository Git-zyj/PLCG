/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95600
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((8643361947623202077ULL) > (7907014062950422057ULL)))), (((unsigned int) var_0)))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned short)65529))));
            arr_6 [i_1] = min((min((arr_5 [i_0]), (arr_5 [i_1]))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_1]))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned int) arr_1 [i_3 - 2])))));
                arr_12 [12U] = ((/* implicit */_Bool) ((long long int) var_5));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)17196)) ? (((/* implicit */int) arr_0 [i_3])) : (arr_10 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 1])));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_3 - 1]))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))));
            }
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_19 [i_6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */_Bool) arr_5 [i_5 + 1])) ? (((/* implicit */int) arr_4 [9U])) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((_Bool) var_16)))));
                            arr_20 [i_0] [i_2] [0U] [i_0] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [9U])) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) (unsigned short)65529))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [10U] [i_7]))))), (((/* implicit */unsigned int) (unsigned short)48323)))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_2 [i_0]), (((/* implicit */unsigned int) var_1)))), (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(signed char)2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17189), ((unsigned short)65530))))) : (((unsigned int) min((arr_21 [i_0] [i_0] [i_0]), (((/* implicit */int) (short)-2403)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_28 [(_Bool)1] = ((/* implicit */_Bool) min((((unsigned int) min((var_2), (((/* implicit */unsigned short) var_7))))), (((/* implicit */unsigned int) (unsigned short)7))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((long long int) ((var_4) ? (((/* implicit */int) (unsigned short)24470)) : (((/* implicit */int) (unsigned short)17198))))) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (unsigned short)7))), (((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)27)) : (((/* implicit */int) var_13)))))))));
        }
    }
    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        var_27 += ((/* implicit */_Bool) min((min((((/* implicit */short) (_Bool)1)), (arr_15 [i_9] [i_9]))), (arr_15 [5U] [5U])));
        var_28 = ((/* implicit */int) (unsigned short)20);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10] [i_10])) ? (((long long int) arr_33 [i_10] [i_10])) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)240), (((/* implicit */unsigned char) var_13))))))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_7))));
        var_29 = ((/* implicit */unsigned int) ((((min((1094921891U), (((/* implicit */unsigned int) (short)-25101)))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_32 [(signed char)3] [(signed char)3])), (var_9))))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) ((signed char) arr_33 [i_10] [i_10]))) : ((+(((/* implicit */int) (short)19349)))))))));
    }
    var_30 = ((/* implicit */unsigned int) var_13);
    var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)51736)) ? (((/* implicit */int) (unsigned short)48344)) : (((/* implicit */int) (short)-18352)))))), (4294967270U)));
    var_32 = ((/* implicit */_Bool) var_17);
}
