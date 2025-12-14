/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89541
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
    var_14 = ((/* implicit */unsigned long long int) min((88762478), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 88762496)) : (var_7)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */int) (+((+(arr_6 [i_0] [i_1] [i_2] [i_2])))));
                        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-8128))) <= (3330320218902752126LL)));
                        var_17 -= ((unsigned int) 88762481);
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) 1407111324723143444LL);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) : (-450452441504552916LL)));
                        var_20 += ((/* implicit */short) (((-(((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (+(((int) -1407111324723143423LL))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13)))))));
                            var_23 -= ((/* implicit */signed char) -450452441504552916LL);
                            var_24 = ((/* implicit */_Bool) ((unsigned int) -450452441504552916LL));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min(((+(((int) var_1)))), ((+(((/* implicit */int) var_13))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)30512))))) + (max((((/* implicit */unsigned int) (unsigned char)144)), (var_12)))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((long long int) -2135155610)))) ? ((+(max((arr_13 [i_2]), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))))));
                    }
                    var_28 = ((/* implicit */signed char) 743290545);
                    var_29 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 3; i_10 < 6; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((((/* implicit */unsigned int) min(((short)12750), (((/* implicit */short) (unsigned char)255))))), ((+(arr_16 [(signed char)10] [i_10 - 2] [i_10 - 1] [i_10 - 3] [i_10 + 1]))))))));
                                var_31 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 2; i_13 < 7; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) var_7)))))) + (max((((/* implicit */long long int) var_7)), (8631086337309201874LL))))) & (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) var_3)))))))));
                                var_33 = ((/* implicit */unsigned int) max((var_33), (min((((/* implicit */unsigned int) (short)30517)), (max((arr_8 [i_10 - 1] [i_10 + 3] [i_10 + 1] [i_10 + 3] [i_10] [i_10]), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)104)), ((short)(-32767 - 1)))))))))));
                                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(max(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) 540329879U)) ? (var_0) : (((/* implicit */int) var_2)))))))))));
                                var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)34415)) ? (((/* implicit */int) (short)-20444)) : (((/* implicit */int) (unsigned char)63))))))), (((1199731687U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48334)) & (((/* implicit */int) var_5))))) * ((+(var_8)))));
                            }
                        } 
                    } 
                }
                for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 367990175)) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (3076876333268742765LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127))) : (3979592920U)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))) : (((/* implicit */unsigned long long int) ((long long int) var_8))))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        for (long long int i_17 = 4; i_17 < 9; i_17 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) var_10);
                                var_39 &= ((/* implicit */long long int) (~((~(((1758261438U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                                var_40 = ((/* implicit */unsigned int) var_6);
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_3)), ((-(var_12))))))))));
                            }
                        } 
                    } 
                }
                var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))))))))));
            }
        } 
    } 
}
