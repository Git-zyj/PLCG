/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62161
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)43332)) ? (((/* implicit */int) min(((unsigned short)46824), ((unsigned short)11928)))) : (((/* implicit */int) (unsigned short)22253)))), (((/* implicit */int) var_10))));
        var_12 = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)22234)) ? (((/* implicit */int) (unsigned short)12377)) : (((/* implicit */int) (unsigned short)56543))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) max((var_10), (arr_0 [i_1])))), (((((/* implicit */int) (unsigned short)22252)) + (((/* implicit */int) var_9))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46824)) ? (((/* implicit */int) (unsigned short)22253)) : (((/* implicit */int) (unsigned short)22242))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_14 = ((unsigned short) ((((/* implicit */int) var_6)) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)45)) == (((/* implicit */int) (unsigned short)43301)))))));
                        var_15 = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))), (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (unsigned short)43301)) ? (((/* implicit */int) (unsigned short)43302)) : (((/* implicit */int) (unsigned short)43087))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        arr_19 [(unsigned short)7] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
        var_16 = var_10;
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_6] [(unsigned short)8])) % (((/* implicit */int) arr_20 [i_8]))));
                            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)46824))));
                            arr_29 [i_7] = min((arr_25 [i_9]), (max(((unsigned short)8971), ((unsigned short)47925))));
                            var_20 = ((unsigned short) arr_2 [i_9]);
                            arr_30 [i_6] [(unsigned short)0] [i_8] [i_9] = (unsigned short)42763;
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)10420))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)59790)) : (max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_9))))))));
}
