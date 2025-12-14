/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/742
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((+(max((var_4), (((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    var_11 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) var_7);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) arr_2 [i_0] [i_1])));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned short) (-(arr_9 [i_3] [i_3] [i_2] [i_3])))))));
                            arr_13 [(unsigned short)3] [i_1] [(unsigned short)3] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))), ((~(((/* implicit */int) arr_5 [i_2]))))));
                            var_15 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                            var_16 = ((/* implicit */unsigned char) ((short) (-(853519753))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_5])), ((unsigned char)127))))));
            var_18 = ((max(((+(var_4))), (var_7))) * (((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_0] [i_0] [i_5] [i_0])) >= (((/* implicit */int) (_Bool)0))))));
            arr_16 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (max((arr_9 [i_0] [i_0] [i_0] [i_5]), (((/* implicit */unsigned long long int) var_3))))))));
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_5))));
                var_20 |= min((var_3), (((/* implicit */short) ((_Bool) min((((/* implicit */unsigned long long int) arr_8 [(unsigned short)5])), (var_2))))));
            }
            for (int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) arr_8 [i_0]);
                var_21 += ((/* implicit */int) var_3);
                var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_9 [i_0] [i_0] [i_5] [i_5]))), (((/* implicit */unsigned long long int) var_9))));
                arr_25 [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((853519753) + (((/* implicit */int) (unsigned short)35563))))) || (((/* implicit */_Bool) var_2)))));
            }
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
        }
        arr_27 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [10U] [i_0] [i_0] [i_0])) ? (arr_22 [(short)8] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60339))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60334)))));
        arr_28 [(unsigned char)2] = ((/* implicit */short) ((((_Bool) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_9))))) ? (max((((((/* implicit */_Bool) (unsigned short)1528)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) arr_23 [i_0] [i_0] [8] [i_0])))))) : ((~(((((/* implicit */int) arr_8 [i_0])) & (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)8))));
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(var_7))))));
                var_25 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_6) & (var_7)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [(unsigned char)22])) : (((/* implicit */int) var_3)))) : ((-(arr_29 [i_8]))))), (((/* implicit */int) arr_31 [i_8] [i_9]))));
            }
        } 
    } 
}
