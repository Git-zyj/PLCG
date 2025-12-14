/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76593
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
    var_16 *= ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 *= 648343863;
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((int) max((((/* implicit */int) (signed char)53)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (unsigned char)74)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) var_7);
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-19385))));
                    }
                    arr_18 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) (short)-19385)) / (189649135)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((5467862683655722985ULL) - (5467862683655722970ULL))))))))));
                            var_21 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) -189649136)) : (4183240910U)));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13853)) || (((/* implicit */_Bool) -189649132))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_22 [i_1] [i_5] [i_7]);
                            arr_35 [i_1] [i_1] [i_6] [i_7] [i_1] = ((/* implicit */short) var_14);
                        }
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32760)) || (((/* implicit */_Bool) -189649136)))))) : ((-(arr_16 [i_1] [i_5] [(signed char)12] [(signed char)12]))))))))));
                    }
                } 
            } 
        } 
        arr_36 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)3655)))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_25 += ((/* implicit */unsigned short) (-((((-(((/* implicit */int) (short)-3996)))) >> (((((/* implicit */int) (short)0)) >> (((arr_37 [i_10]) + (7910436713438140947LL)))))))));
        arr_40 [i_10] [i_10] = ((/* implicit */unsigned char) (short)-32422);
    }
}
