/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90234
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9080127147223484100ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))));
    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)15)) >> (((10176729333267873045ULL) - (10176729333267873020ULL)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_10)) - (var_13)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned int) var_17);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (!((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_16))))))));
                        var_23 = ((/* implicit */unsigned short) arr_8 [i_0] [(signed char)8] [i_2]);
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) /* same iter space */
        {
            arr_15 [(signed char)11] [i_4 - 3] [i_4] = ((/* implicit */unsigned short) var_2);
            arr_16 [(unsigned char)9] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned char) var_14);
        }
        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) var_0);
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_5 - 2] [i_5 - 2] [i_0]);
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    var_25 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3855789333U))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_14 [i_0] [i_6] [i_7]))));
                }
            } 
        } 
    }
}
