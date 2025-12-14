/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88989
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (3698594359725129113ULL)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [0U] [i_0] = ((/* implicit */unsigned short) 2807399670120977425LL);
        arr_3 [i_0] = ((/* implicit */unsigned char) 0U);
        arr_4 [i_0] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        arr_5 [i_0] = (unsigned short)0;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) var_4);
        arr_8 [12LL] = 0ULL;
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_16 [(unsigned char)1] [11LL] = ((/* implicit */int) var_3);
                arr_17 [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_7);
                var_13 = ((/* implicit */_Bool) 21ULL);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_14 += ((/* implicit */int) 1099511627775LL);
                        arr_23 [i_1] [14U] [14U] = ((/* implicit */unsigned int) -1);
                        arr_24 [i_5] [i_2] [(unsigned short)9] [i_4] [i_2] [i_1] = ((/* implicit */unsigned int) 18446744073709551601ULL);
                        var_15 = ((/* implicit */unsigned short) var_4);
                        var_16 = ((/* implicit */short) 576460752303423488LL);
                    }
                } 
            } 
            var_17 = ((/* implicit */short) var_10);
            arr_25 [i_1] = ((/* implicit */unsigned char) var_10);
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
        {
            arr_30 [i_1] [i_1] [i_6] = 4294967288U;
            var_18 ^= ((/* implicit */_Bool) (unsigned short)61222);
            var_19 = ((/* implicit */unsigned char) (signed char)107);
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) var_9);
            arr_33 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            var_21 = var_9;
            arr_34 [i_1] [i_7] [i_1] = ((/* implicit */long long int) var_2);
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_4))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_37 [i_8] = ((/* implicit */unsigned char) var_2);
        var_23 &= ((/* implicit */short) (signed char)-35);
        arr_38 [i_8] |= ((/* implicit */unsigned int) var_0);
        var_24 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
    }
}
