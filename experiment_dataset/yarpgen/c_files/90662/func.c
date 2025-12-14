/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90662
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [4LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65522)) ? (140737488355327LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_16 ^= ((/* implicit */short) max((((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (short)16256)) : (((/* implicit */int) var_13)))) | (((((/* implicit */int) var_10)) >> (((/* implicit */int) var_1)))))), (((/* implicit */int) (short)16128))));
                        var_17 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((-1194893833314864318LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15145)))))))), (min((((/* implicit */long long int) (signed char)-49)), (-5208772272949247583LL)))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_18 ^= max((arr_1 [i_0] [i_0]), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (signed char)110)))))) & (((arr_1 [i_4] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_4] [i_4]))))))));
            var_19 ^= ((/* implicit */_Bool) ((int) (signed char)127));
            var_20 ^= ((/* implicit */unsigned short) max((arr_12 [i_0] [i_0]), (min((((/* implicit */unsigned long long int) var_7)), (arr_12 [i_0] [i_0])))));
            arr_14 [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4] [i_0])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-100)), (18446744073709551615ULL)))) ? ((~(-672737658677183423LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        }
        arr_15 [i_0] = ((/* implicit */short) ((signed char) var_7));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6] [10ULL] [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))))));
                    arr_20 [i_5] = ((/* implicit */long long int) arr_12 [i_5] [i_0]);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */_Bool) var_0);
    var_23 ^= ((/* implicit */unsigned char) ((_Bool) (unsigned char)2));
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) var_14)))))));
                }
            } 
        } 
    } 
}
