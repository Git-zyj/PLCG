/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99041
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
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-21))));
                    var_17 = (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (var_3) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_2 [i_1])))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-21)), (var_9)))) ? (var_5) : (((/* implicit */unsigned long long int) 1))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)60)))) & (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (signed char)-21);
                arr_13 [i_4] = ((((/* implicit */_Bool) 1103712034U)) ? (1474095121U) : (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (unsigned char)0)) : (-693741951)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        arr_16 [(unsigned char)9] = ((/* implicit */unsigned long long int) (signed char)-21);
        arr_17 [i_5 - 2] = ((/* implicit */long long int) 536870912);
        arr_18 [i_5 - 2] [i_5 - 1] = (~(((/* implicit */int) (unsigned char)195)));
        var_20 = ((/* implicit */unsigned char) arr_15 [i_5 + 1]);
    }
}
