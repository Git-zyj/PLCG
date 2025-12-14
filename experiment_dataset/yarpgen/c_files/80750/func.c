/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80750
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
    var_13 = ((/* implicit */unsigned char) min((var_11), ((+((+(var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = min((var_4), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [6] [(_Bool)1] [i_1]))))) : (((/* implicit */unsigned int) min((518980773), (-518980771))))))) ? ((-(((1386363337U) << (((((/* implicit */int) var_9)) - (72))))))) : (((/* implicit */unsigned int) ((518980785) % (((/* implicit */int) var_8)))))));
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 2908603967U)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_12) >= (((/* implicit */int) arr_1 [i_0]))))), (2908603958U)))));
                var_15 = ((/* implicit */unsigned short) var_8);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_9 [i_1] [(unsigned char)1] = ((((/* implicit */_Bool) var_4)) ? (((int) var_9)) : (((/* implicit */int) var_4)));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [0U] [i_1] [i_1] [i_2]))))) : (-518980781));
                    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) > (arr_2 [i_0] [2ULL]))))));
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) 518980770)) ? (var_2) : (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1])))) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)46081)))))));
                    arr_11 [5] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                }
                for (unsigned char i_3 = 1; i_3 < 6; i_3 += 3) 
                {
                    arr_15 [2] [i_3] = ((/* implicit */unsigned char) var_5);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(-518980771)))) % (min((((/* implicit */long long int) var_9)), (var_5)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1])) && (((/* implicit */_Bool) (unsigned char)185))))), (var_8)))) : (((((/* implicit */_Bool) 1815024862U)) ? (arr_14 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 8; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (var_12)))), ((~(var_3))))));
                                var_20 = ((/* implicit */_Bool) var_6);
                                arr_22 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) (_Bool)1)))) | (min((((/* implicit */int) (unsigned char)185)), (-964670029))))), (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_3 + 4])) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_3 - 1])) : (((/* implicit */int) var_9))))) ? (min((((/* implicit */long long int) var_8)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_1] [i_0] [i_3 - 1] [i_3]))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_14 [i_1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((unsigned char) var_0));
                                var_24 = ((/* implicit */long long int) ((unsigned char) ((arr_21 [i_0] [i_1] [(unsigned char)2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                                var_25 = ((/* implicit */int) arr_26 [i_0] [6] [i_0]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) (!((_Bool)1)));
                    arr_30 [i_0] [i_1] [i_6] [i_0] = (+(18446744073709551607ULL));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                arr_37 [i_6] [i_1] [i_6] [i_9] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                                var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (unsigned char)125)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((var_1) << (min((var_12), (((/* implicit */int) ((unsigned short) var_8))))));
}
