/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98266
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
    var_15 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (var_13) : (((/* implicit */long long int) 691162707)))));
            var_16 = ((int) (~(((/* implicit */int) arr_4 [(unsigned short)4] [i_0 - 1] [i_1]))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((arr_4 [i_0 + 2] [i_1] [i_0 - 1]) ? (((/* implicit */int) (!(var_14)))) : (((arr_4 [i_0] [i_1] [i_0]) ? (691162732) : (((/* implicit */int) var_3))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) ((signed char) var_2));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0 - 1]);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_23 [i_2] [18] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)58220)), (min((((/* implicit */int) (unsigned char)108)), (-691162707)))))) || (((/* implicit */_Bool) arr_20 [i_5] [i_4 + 2] [i_3] [i_2]))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_4))));
                            arr_27 [i_2] [i_3] [i_3] [i_2] = ((short) -691162755);
                            var_18 = -691162732;
                            var_19 = ((int) ((int) arr_14 [i_4 - 1] [i_4 - 1] [i_2]));
                            arr_28 [i_2] [i_2] [(unsigned short)3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_4 + 2] [i_4])) && ((!(((/* implicit */_Bool) (unsigned char)118)))))));
                        }
                        arr_29 [i_2] = ((/* implicit */unsigned short) var_11);
                        arr_30 [(unsigned char)16] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) arr_19 [17] [17] [i_2]);
                    }
                } 
            } 
        } 
        arr_31 [i_2] [(unsigned short)9] = ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_2]))) ? (((/* implicit */int) arr_13 [(signed char)2])) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_14 [i_2] [13] [10U])))))));
    }
    var_20 = ((/* implicit */int) var_12);
    var_21 = ((/* implicit */int) var_5);
    var_22 = (-((-(((int) var_1)))));
}
