/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9177
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
    var_11 = var_4;
    var_12 *= ((signed char) var_8);
    var_13 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 *= arr_3 [i_0] [i_1] [i_1];
                var_15 = (signed char)-115;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)-32)))))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                            {
                                arr_13 [i_3] [(signed char)4] [i_2] [i_3] [i_4 + 1] = (signed char)-18;
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) - (((/* implicit */int) (signed char)20)))) % (((/* implicit */int) ((signed char) (signed char)68))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)6)) / (((/* implicit */int) (signed char)30))));
                            }
                            for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) min((min(((signed char)-95), (var_6))), ((signed char)121)))) != (((/* implicit */int) (signed char)30))));
                                arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-90)) ? ((~(((/* implicit */int) max(((signed char)68), (arr_8 [i_0] [i_3] [i_2] [i_0] [i_0 - 2] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) min(((signed char)89), ((signed char)127)))))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                            {
                                arr_23 [i_0 - 1] [i_1] [i_2] [i_3] [i_6] = var_10;
                                arr_24 [i_0] [i_1] [i_0] [i_3 - 2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) min((var_3), ((signed char)68)))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)-117))))))) && (((/* implicit */_Bool) min(((~(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_3] [(signed char)9])))))))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
                                var_20 = ((/* implicit */signed char) min((((((/* implicit */int) max((arr_1 [i_1] [i_3 + 1]), ((signed char)91)))) >> (((((/* implicit */int) min(((signed char)-25), ((signed char)56)))) + (34))))), (((((/* implicit */int) (signed char)24)) ^ (((/* implicit */int) (signed char)-6))))));
                            }
                            arr_25 [i_3 - 1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (signed char)39)) < (((/* implicit */int) (signed char)85))))))))));
                        }
                    } 
                } 
                arr_26 [i_1] [i_0] = ((signed char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-11)) > (((/* implicit */int) (signed char)-57)))))));
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_36 [i_9] [(signed char)7] [i_8] [i_7] [i_1] [(signed char)9] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) var_9)))) / (((/* implicit */int) arr_14 [(signed char)5] [i_1] [i_7] [(signed char)1] [i_9]))));
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)59)) | (((/* implicit */int) (signed char)85)))) <= (((((/* implicit */int) (signed char)84)) / (((/* implicit */int) (signed char)90))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) var_1)))), (max(((+(((/* implicit */int) (signed char)-9)))), (((/* implicit */int) (signed char)73)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
