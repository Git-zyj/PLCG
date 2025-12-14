/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61429
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65380)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)155))) : (var_9))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [6U] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)65380)));
        arr_5 [i_0] [i_0] = (-(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (signed char)-64)), ((unsigned short)141))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned short) var_8)), ((unsigned short)148))))), (max(((unsigned short)155), ((unsigned short)44021)))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_6 [i_1] [i_1]) == (arr_6 [i_1] [i_1]))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)144)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) var_7))))))))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65380)) ? (((/* implicit */unsigned long long int) ((((arr_7 [i_1] [i_1]) ^ (arr_7 [(signed char)0] [(signed char)0]))) ^ (((/* implicit */unsigned int) var_5))))) : (arr_6 [(signed char)11] [i_1])));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) arr_12 [i_3] [i_3]);
                    var_18 = ((/* implicit */unsigned int) (unsigned short)156);
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) != (min((((/* implicit */int) (unsigned short)156)), ((~(((/* implicit */int) (unsigned short)156))))))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_20 [i_2] [i_2] [i_5] = ((/* implicit */int) 15U);
                    arr_21 [i_2] [i_2] [i_5] = ((/* implicit */signed char) arr_19 [i_2] [i_3] [i_2]);
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)173)))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (unsigned char)239)))) : (((/* implicit */int) (unsigned short)46549))))))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~((-(((/* implicit */int) (signed char)8)))))))));
                        var_23 += ((/* implicit */unsigned int) (-(arr_25 [i_2 + 2])));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_6])) % (((/* implicit */int) ((arr_25 [i_3]) >= (((/* implicit */int) var_1))))))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) (unsigned short)21);
                }
            }
        } 
    } 
}
