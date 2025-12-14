/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78467
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
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_18))) : (var_13))) : ((-(max((((/* implicit */unsigned long long int) var_16)), (var_18)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) 3621044708U))) - (var_4)));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((_Bool) 458784014));
                        arr_10 [14U] [i_0] = ((long long int) var_1);
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
        {
            arr_15 [i_0 - 1] [i_0] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3621044702U)) ? (4932348387373258324ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023)))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (short)-1024))));
                var_21 ^= ((/* implicit */unsigned short) (((_Bool)0) ? (1019164782954349181ULL) : (((/* implicit */unsigned long long int) 32767))));
            }
            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        }
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
        {
            var_23 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            arr_22 [i_0] [i_0] [i_6] = ((/* implicit */short) (+(((/* implicit */int) var_16))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                arr_26 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13541))) : (4932348387373258324ULL)))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned short) var_3);
                            arr_35 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) var_1))) <= (((((/* implicit */_Bool) (unsigned char)97)) ? (4932348387373258324ULL) : (((/* implicit */unsigned long long int) 2279911981446213217LL))))));
                            arr_36 [(unsigned char)4] [12LL] [(unsigned char)4] [i_0] = ((long long int) var_7);
                            var_25 = ((unsigned char) 2529884074242951362LL);
                        }
                    } 
                } 
                var_26 = (_Bool)1;
            }
        }
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 329800006U)) < (7468711951725981291ULL)));
    }
    for (unsigned int i_10 = 1; i_10 < 6; i_10 += 2) 
    {
        arr_40 [i_10] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) 1430199863U)))));
        arr_41 [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1024))));
    }
    var_28 = ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22979))) : (var_5))) | (((/* implicit */unsigned long long int) ((int) var_6))))) + (((((/* implicit */unsigned long long int) (+(2529884074242951352LL)))) | (max((((/* implicit */unsigned long long int) var_12)), (var_18))))));
}
