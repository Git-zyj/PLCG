/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9971
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
    var_13 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))), (max(((~(((/* implicit */int) var_7)))), ((~(((/* implicit */int) (short)-628))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) != (((/* implicit */int) var_2))));
            var_15 |= ((/* implicit */int) ((arr_1 [i_0] [(signed char)12]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 681054890))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_9 [i_1] [i_2] [i_2] [i_3] [i_3] = ((_Bool) var_12);
                        arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_6 [i_0] [i_1] [i_2] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7))))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_13 [(short)5] = ((/* implicit */signed char) arr_6 [(signed char)5] [i_0] [i_0] [i_0]);
            var_16 *= ((/* implicit */signed char) (!(arr_11 [i_0])));
        }
        arr_14 [i_0] = ((/* implicit */unsigned int) ((short) (signed char)60));
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_10)))));
                    arr_20 [i_6] [(short)12] [i_6] [i_6] &= (signed char)-61;
                    arr_21 [i_6 + 1] [i_6] [i_5] [i_0] = ((/* implicit */int) ((unsigned int) arr_18 [i_6 - 1] [i_5 - 1]));
                    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) arr_4 [i_6]))) : (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (signed char)60))));
    var_20 = ((/* implicit */int) (-(729601621U)));
    var_21 *= ((/* implicit */short) var_1);
}
