/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76108
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_10 ^= ((/* implicit */int) var_7);
                            arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */int) (+(((arr_10 [i_0] [(short)7] [3] [(unsigned short)7] [i_1] [i_1]) % (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_4 [i_3])))))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)124)))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))) * (((((((/* implicit */_Bool) 730576621U)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91))))) : (((/* implicit */int) ((_Bool) (signed char)-106)))))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)82)))), (((/* implicit */int) (signed char)-89))))) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_1]))))))) : (((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_0]))))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)91)) : (var_6))))) ? (((((/* implicit */int) ((arr_6 [i_0] [i_1] [i_0] [i_0]) || (((/* implicit */_Bool) arr_7 [i_0] [i_0]))))) % (((/* implicit */int) ((signed char) (short)-9641))))) : (((/* implicit */int) ((short) (_Bool)0)))));
                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (signed char)126))) ? (max((13524508633356417732ULL), (((/* implicit */unsigned long long int) (signed char)77)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (signed char)92))) % (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            arr_27 [i_7] = max((((/* implicit */int) arr_26 [i_4] [i_5] [i_6])), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35255))))) ? (2080786955) : (((int) var_8)))));
                            arr_28 [i_4] [i_5] [i_6 - 3] [i_7] = ((/* implicit */long long int) max((13524508633356417735ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 62456666)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
                            arr_29 [i_4] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_25 [i_7] [i_5] [i_5 + 1] [i_5] [i_5] [i_4])) ? (((/* implicit */int) arr_21 [i_4])) : (var_6))) % (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_9)) % (((/* implicit */int) arr_15 [i_4])))) : (((((/* implicit */_Bool) -757333040)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)48333)))))) : (arr_23 [i_4] [13] [i_4] [i_4])));
                        }
                    } 
                } 
                arr_30 [i_4] = ((/* implicit */long long int) var_5);
                var_14 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)30280)) : (((/* implicit */int) (short)32764)))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned char) (signed char)-116);
}
