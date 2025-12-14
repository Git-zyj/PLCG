/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84337
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [(signed char)17] [i_0] = ((/* implicit */unsigned short) var_1);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 1581558580);
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_0))), (((((int) (unsigned short)19848)) * (((((/* implicit */_Bool) (unsigned short)24403)) ? (((/* implicit */int) (unsigned short)39685)) : (((/* implicit */int) (signed char)80))))))));
                    var_14 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2]);
                    arr_8 [i_2] |= ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)39675)) * (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1]))))));
                    var_15 = ((/* implicit */unsigned short) (signed char)5);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */int) (signed char)(-127 - 1));
        var_16 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_5 [i_3] [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45688)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))))))));
    }
    var_17 = ((/* implicit */signed char) ((int) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)-121)))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((signed char) ((var_1) != ((-(((/* implicit */int) (unsigned short)38784)))))));
                    arr_22 [i_4] [(unsigned short)8] [(unsigned short)13] |= var_6;
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3)))) ? (((/* implicit */int) ((signed char) arr_11 [i_5 - 3]))) : (((((/* implicit */_Bool) (unsigned short)65520)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-121)), (arr_23 [i_6] [i_5]))))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5 + 2])) << (((((/* implicit */int) arr_17 [i_5 + 2])) - (25871)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 + 1])) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (signed char)-119)))))));
                        arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] |= (+((-(arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]))));
                    }
                    arr_27 [i_4] [i_4] [0] [i_4] = ((/* implicit */int) var_5);
                }
            } 
        } 
    } 
}
