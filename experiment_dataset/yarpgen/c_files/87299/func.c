/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87299
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-((+(var_3)))))), (min((2563843447U), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_8 [i_0] = ((/* implicit */long long int) (signed char)-80);
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_0] [i_1]))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (arr_2 [i_0])));
                    arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_1]) && (((/* implicit */_Bool) var_1))));
                    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-2210730647920622029LL)));
                }
            }
            for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                var_15 = ((/* implicit */int) (short)11940);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((unsigned long long int) arr_2 [i_0])))))));
            }
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                arr_18 [i_5] [i_5] = ((/* implicit */long long int) var_8);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_5])) : (((/* implicit */int) (signed char)119))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_7)))))))));
                var_18 -= ((/* implicit */short) (+(var_3)));
            }
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) var_4))));
            var_20 ^= ((/* implicit */signed char) var_10);
            arr_19 [i_0] = ((/* implicit */unsigned int) var_10);
        }
    }
    for (short i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) ((int) var_0)))))) ? ((((!(((/* implicit */_Bool) arr_20 [i_6])))) ? (((((((/* implicit */int) arr_22 [i_6])) + (2147483647))) >> (((((/* implicit */int) var_8)) - (23526))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) ((min((16591241759282949738ULL), (((/* implicit */unsigned long long int) (unsigned short)53810)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_1))))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min(((~(arr_20 [(unsigned short)4]))), (min((((/* implicit */long long int) var_4)), (arr_21 [(signed char)12]))))))));
        arr_23 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    {
                        arr_34 [i_6] = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) var_4))))))));
                        arr_35 [i_6] [i_7] [i_8] [i_9] [(_Bool)1] [i_7] &= ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        arr_40 [i_10] [(_Bool)1] |= ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) * (((/* implicit */int) var_4)))) / (((var_10) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (short)-31727))))))) ? ((+(min((((/* implicit */unsigned long long int) var_9)), (18446744073709551604ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(_Bool)1] [i_10]))) - (((38ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10]))))))));
        var_23 = ((/* implicit */long long int) min((min((var_10), (((((/* implicit */_Bool) (unsigned short)63169)) && (((/* implicit */_Bool) 274877906880ULL)))))), ((!(((/* implicit */_Bool) max((var_8), (var_8))))))));
    }
    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) min((var_5), (var_5))))))) ? (((/* implicit */int) (unsigned short)12391)) : (((/* implicit */int) var_2))));
}
