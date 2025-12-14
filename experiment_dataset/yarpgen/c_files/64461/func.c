/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64461
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
    var_18 = ((/* implicit */int) ((unsigned short) ((int) 4294967295U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1 + 1] [(unsigned char)6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (21U) : (0U)));
                arr_6 [7U] = ((/* implicit */_Bool) var_8);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)84)), (21U)))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? ((+(4294967295U))) : (((/* implicit */unsigned int) 33292288)))));
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((((unsigned short) (unsigned char)167)), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 21U)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        arr_17 [i_5 - 1] [i_5] = ((/* implicit */long long int) arr_3 [i_5] [i_5 + 1]);
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) min(((+(((((/* implicit */unsigned int) var_2)) ^ (0U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_5 - 1])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_21 = ((/* implicit */int) var_15);
            arr_22 [2] = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967275U))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -9)) <= (min((arr_1 [i_5 + 1]), (((/* implicit */long long int) arr_15 [i_5 + 2] [i_5 - 1]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    for (long long int i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned int) var_15);
                            var_24 = ((/* implicit */unsigned int) arr_30 [i_10] [i_9] [(unsigned char)9] [i_10] [i_10 + 1]);
                            arr_32 [i_5] [i_5] [i_8] [i_9 - 1] [i_8] [i_9] = ((/* implicit */short) arr_26 [i_5] [i_7] [i_8] [i_7]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5 + 2] [i_7] [i_8]))) % (((((/* implicit */_Bool) (unsigned char)70)) ? (arr_25 [i_5] [i_7] [i_8]) : (((/* implicit */unsigned int) arr_3 [i_8] [3]))))));
            }
        }
        for (int i_11 = 2; i_11 < 8; i_11 += 4) 
        {
            arr_35 [i_5] [i_11 + 1] = ((/* implicit */signed char) min((max((arr_3 [i_5 + 1] [i_11 - 1]), (arr_3 [i_5 - 1] [i_11 - 2]))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_12)), ((short)-4)))) > (((/* implicit */int) max(((signed char)63), (((/* implicit */signed char) var_3))))))))));
            arr_36 [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 2])) && (((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1]))))) >> (((((/* implicit */int) ((unsigned char) -896214205952343982LL))) - (54)))));
            arr_37 [i_5] [i_5] [i_5] &= ((/* implicit */unsigned char) ((arr_0 [i_5]) <= ((+(-896214205952343975LL)))));
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((var_15), ((!(((/* implicit */_Bool) arr_44 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]))))))), (15341063723638141339ULL)));
                    var_27 = ((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) != ((+(((/* implicit */int) (signed char)-12))))));
                }
            } 
        } 
    } 
}
