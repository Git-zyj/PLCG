/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71344
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
    var_19 *= ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) (((+(arr_5 [i_0] [i_0 - 2] [i_1 + 2]))) != (((arr_5 [i_1] [i_0 + 1] [i_1 + 1]) - (((/* implicit */int) (short)10483))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned short)35219))))))) ? (((((/* implicit */_Bool) (short)15383)) ? (max((((/* implicit */unsigned int) (unsigned short)28962)), (1668794204U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -1314944101)) && (((/* implicit */_Bool) var_17))))) == (((/* implicit */int) (unsigned char)71))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((max((1707402831), (((/* implicit */int) (short)-29283)))), (((/* implicit */int) (short)-14836))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_4] = ((/* implicit */int) ((_Bool) (short)13208));
                                var_20 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_2] = ((/* implicit */short) min((2954581134U), (((/* implicit */unsigned int) (short)-7953))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_21 = ((/* implicit */short) arr_8 [i_0]);
                    var_22 = ((/* implicit */int) (unsigned short)24035);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (0ULL)));
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (unsigned short)0);
                                var_24 = 2954581155U;
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_7 [i_1 + 2] [i_0 - 2] [i_5] [i_6];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (short)-15384));
                                var_25 = ((/* implicit */unsigned char) var_1);
                                var_26 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) ((unsigned short) arr_4 [i_0 - 4]));
                }
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                {
                    arr_37 [i_0] [i_1] [i_10] [i_10] = ((/* implicit */unsigned short) (((((_Bool)0) ? (2966764584U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_10])))))))) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)48)) % (arr_19 [i_0] [i_0] [i_0 - 1]))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((1328202720U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)7))))))));
                    arr_38 [i_10] = ((/* implicit */unsigned char) ((short) max((arr_32 [i_0] [i_10] [i_0 - 3] [i_1] [i_0]), (arr_32 [i_10] [i_1] [i_0 - 2] [i_10] [i_10]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_44 [i_10] [i_0] [i_10] [i_11] [i_12] = ((/* implicit */int) arr_28 [i_12] [i_1 + 2] [i_0 - 4] [i_0]);
                                var_29 = ((/* implicit */short) min((var_29), (var_9)));
                                var_30 = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                }
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                {
                    var_31 = arr_24 [i_13] [i_1] [i_0];
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned long long int) arr_20 [i_0] [i_0] [i_0])))));
                }
            }
        } 
    } 
}
