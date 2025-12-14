/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92396
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
    var_20 -= ((5966852793403454116LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min(((signed char)25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-30002)))))));
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) ^ (5966852793403454120LL)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_3 [i_0] [10U] [i_1]))));
                            var_23 = ((/* implicit */_Bool) (unsigned char)224);
                            arr_14 [6U] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)213);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            var_25 = ((unsigned int) (signed char)25);
            var_26 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_4 [i_0])) <= (arr_8 [i_0] [i_0] [i_0] [i_0]))));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((14) <= (1)));
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)213)) ^ (((/* implicit */int) (signed char)-8))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            var_28 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
            var_29 -= ((/* implicit */_Bool) ((int) 1688849860263936ULL));
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 13; i_7 += 2) /* same iter space */
        {
            arr_23 [i_7 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)70)) ? (-7366069167635188314LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_4 [(unsigned char)14]))))))));
            var_30 = ((/* implicit */int) arr_1 [(signed char)0]);
            var_31 ^= ((/* implicit */signed char) arr_21 [i_5] [i_5]);
            /* LoopSeq 1 */
            for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) arr_17 [i_5] [i_8]);
                arr_26 [(_Bool)1] |= ((/* implicit */int) (!(((/* implicit */_Bool) 1447978283U))));
                var_33 = ((/* implicit */unsigned short) ((-5966852793403454121LL) + (5838656297432836989LL)));
            }
            var_34 = ((/* implicit */short) (signed char)120);
        }
        /* vectorizable */
        for (short i_9 = 1; i_9 < 13; i_9 += 2) /* same iter space */
        {
            arr_29 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) (-2147483647 - 1))) ^ (arr_5 [(unsigned char)6])));
            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-95))));
            var_36 ^= ((/* implicit */_Bool) arr_27 [(_Bool)1] [(_Bool)1] [i_5]);
        }
        var_37 = ((/* implicit */unsigned int) arr_17 [i_5] [i_5]);
        var_38 -= ((/* implicit */long long int) arr_10 [i_5]);
    }
}
