/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62496
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_3 [i_0])) && (((arr_3 [i_0]) != (arr_3 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) var_1)))))));
        arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_17)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_11 [i_2] &= (+(var_14));
            arr_12 [i_1] [i_2] = ((/* implicit */short) var_8);
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned char i_4 = 4; i_4 < 15; i_4 += 3) 
                {
                    {
                        arr_17 [i_4] [i_4] = ((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) >> (((/* implicit */int) ((arr_15 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)10] [i_1]))))))));
                        var_19 = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */unsigned char) ((long long int) arr_9 [i_1]));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) <= (((/* implicit */int) arr_0 [i_5])))))));
        var_22 |= ((unsigned short) (~(arr_2 [(unsigned char)6])));
        var_23 = ((/* implicit */int) ((short) arr_19 [i_5] [i_5]));
        var_24 = ((/* implicit */int) var_11);
    }
    var_25 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
    var_26 = ((/* implicit */unsigned char) var_2);
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_0))))), (min((((/* implicit */int) var_7)), (var_16)))))) ? (((/* implicit */int) ((((((/* implicit */int) var_10)) + (((/* implicit */int) var_13)))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9244))) < (386729458U))))))) : ((~(((((/* implicit */_Bool) var_17)) ? (var_5) : (((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            {
                var_28 *= ((/* implicit */short) min(((+(((((/* implicit */int) arr_10 [i_6] [5U])) * (((/* implicit */int) var_13)))))), (min((((/* implicit */int) ((((/* implicit */int) arr_19 [i_6] [i_7 + 3])) != (arr_24 [i_6])))), ((-(((/* implicit */int) var_2))))))));
                arr_25 [(signed char)4] &= (((~(max((var_18), (((/* implicit */int) arr_13 [i_6] [i_6])))))) / (((((/* implicit */int) ((unsigned char) arr_7 [i_6]))) - (((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_0 [12ULL])))))));
                arr_26 [i_6] = (+(max((var_17), (((/* implicit */unsigned int) arr_19 [i_7 + 1] [i_7 + 1])))));
            }
        } 
    } 
}
