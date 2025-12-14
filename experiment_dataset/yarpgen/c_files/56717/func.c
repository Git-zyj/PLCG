/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56717
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
    var_11 += ((/* implicit */unsigned char) ((unsigned int) ((short) ((unsigned int) (short)(-32767 - 1)))));
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) ((unsigned long long int) (unsigned char)219))));
    var_13 = ((/* implicit */unsigned long long int) ((int) ((short) ((_Bool) (unsigned char)36))));
    var_14 = ((/* implicit */int) ((long long int) ((unsigned short) ((unsigned int) (unsigned short)31905))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((short) ((int) ((signed char) var_9)))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned int) ((int) ((int) arr_5 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) ((unsigned long long int) (unsigned short)65529))));
        var_18 = ((/* implicit */unsigned short) ((unsigned char) ((int) ((unsigned long long int) (unsigned short)65529))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned int) ((_Bool) ((long long int) arr_5 [i_3] [i_3] [i_3]))));
        var_20 &= ((/* implicit */unsigned long long int) ((signed char) ((int) (signed char)-30)));
    }
    for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) ((unsigned char) (unsigned short)26923))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((signed char) ((long long int) ((int) arr_18 [i_4 - 2] [i_4 + 1] [i_6]))))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) ((_Bool) var_3))));
                    arr_19 [i_4] [i_4] [i_6] = ((unsigned int) ((unsigned int) (_Bool)1));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) ((unsigned short) ((_Bool) 0U)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((int) ((int) ((unsigned int) arr_16 [i_4 - 3] [i_4 - 2] [(unsigned char)6] [i_4 - 2])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            var_26 |= ((/* implicit */unsigned long long int) ((int) 0));
            var_27 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) arr_13 [i_7 - 1] [i_4] [i_4])));
        }
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_28 &= ((/* implicit */long long int) ((unsigned char) 206980622));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 22; i_10 += 2) 
                {
                    for (signed char i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_29 = ((unsigned int) ((unsigned long long int) arr_20 [i_8 + 1] [i_4]));
                            arr_33 [i_4] [i_10] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) arr_11 [(unsigned char)17])));
                        }
                    } 
                } 
            }
            for (int i_12 = 2; i_12 < 22; i_12 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) 17592186040320ULL)));
                var_31 = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) arr_15 [i_4])));
            }
            arr_37 [(signed char)0] [(signed char)6] [i_8 + 2] &= ((/* implicit */unsigned int) ((_Bool) ((int) arr_24 [(signed char)18] [(signed char)18])));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            arr_41 [i_4] = ((/* implicit */unsigned short) ((signed char) ((signed char) var_2)));
            var_32 = ((/* implicit */int) ((unsigned int) ((signed char) var_5)));
            var_33 = ((/* implicit */unsigned int) ((int) ((_Bool) (unsigned char)247)));
        }
        var_34 = ((unsigned char) ((unsigned short) ((unsigned long long int) var_7)));
    }
}
