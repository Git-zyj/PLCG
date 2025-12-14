/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78312
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) -489115364))));
    var_14 = ((/* implicit */signed char) (short)-15701);
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_0))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_8))))) + ((~(1083773832U)))))), (var_0)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */_Bool) ((((18446744073709551611ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)9819)) : (((/* implicit */int) var_1))))))) + (((/* implicit */unsigned long long int) (-(arr_1 [i_0]))))));
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)38296)) - (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (-489115349))))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)8963)) >> (((((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (1784406052))) - (84)))))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) max((arr_14 [i_3]), (((/* implicit */unsigned long long int) ((arr_14 [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))))))));
        arr_17 [11U] = ((/* implicit */unsigned char) ((arr_14 [i_3]) + (max((arr_14 [i_3]), (((/* implicit */unsigned long long int) arr_13 [i_3]))))));
        arr_18 [i_3] = ((/* implicit */short) var_7);
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_26 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8964)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (short)-26012)))))))) & (((/* implicit */int) (_Bool)1))));
                    var_18 += (-(max((34359738367LL), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6] [i_4] [i_8 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7] [i_7 + 1])) ? (arr_27 [(unsigned short)4] [(unsigned short)4] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7] [i_7 - 1] [i_7] [i_7 - 1])) && (((/* implicit */_Bool) arr_28 [i_7 - 1] [(unsigned char)16] [i_7 + 1] [i_7 + 1]))))))));
                                var_19 += ((/* implicit */unsigned char) arr_14 [i_4]);
                                var_20 -= ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)24)), (1394723892)));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */short) arr_19 [i_5]);
                    arr_33 [i_4] [i_6] [i_4] [i_5] &= ((/* implicit */long long int) (short)-9815);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)60)))) & (((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_20 [i_4])))))));
    }
}
