/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81669
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
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)225)))) ? (max((var_2), (((/* implicit */unsigned int) var_9)))) : (2463818191U)))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2] = arr_0 [i_0];
                    arr_11 [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)5);
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3093867547351861110ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_16 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]))));
                        arr_18 [i_4] [i_3] [i_1] [(unsigned short)6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_1)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [(_Bool)1] [i_0 - 2] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (2390361507U)));
                                var_14 = ((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [i_6]);
                                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (unsigned char)55)))) : (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_16 = ((unsigned short) var_3);
                    var_17 ^= ((/* implicit */long long int) arr_7 [i_3]);
                }
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                {
                    arr_26 [i_7] [(unsigned char)12] [i_0 - 1] &= arr_12 [i_0] [4ULL] [i_0 - 1];
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_20 [i_8])) - (13391))))), (((/* implicit */int) (unsigned char)255)))))))));
                                var_19 ^= ((/* implicit */int) (_Bool)1);
                                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_1]))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_7] [4LL]);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))))) ? (-2141752056158953584LL) : (((/* implicit */long long int) var_4))));
                }
                arr_33 [i_0] = arr_30 [(unsigned short)5] [i_1] [i_0 - 1] [i_0] [i_0] [i_0];
                var_23 = ((/* implicit */unsigned long long int) ((int) ((unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((var_7) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1119522279U)) ? (((/* implicit */long long int) var_4)) : (197864634548617043LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)35027)) : (((/* implicit */int) (_Bool)1)))) : (min((var_4), (((/* implicit */int) var_8))))))));
}
