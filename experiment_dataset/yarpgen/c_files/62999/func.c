/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62999
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) arr_0 [i_0 + 2]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min(((((-(arr_4 [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_9)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (short)24497)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) (unsigned char)210))))))));
                                var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((+(var_2)))))));
                                var_13 = ((short) (+((-(((/* implicit */int) (short)-32765))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-1))));
                }
            } 
        } 
    }
    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) arr_16 [i_5]);
        var_16 = ((/* implicit */short) var_9);
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)58))));
        var_18 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_5 - 1]);
    }
    for (int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) (signed char)-117))))), ((signed char)-117)));
                        var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)7)), (1839674224))))))) / (((/* implicit */int) min(((signed char)-7), ((signed char)115)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5830375425891671587LL)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)5), (min(((signed char)-7), (arr_18 [i_6]))))))) : (var_6)));
        var_22 |= ((/* implicit */long long int) var_5);
        var_23 = arr_5 [i_6];
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((_Bool) (-(((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))))));
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (short)-10463))));
                        var_26 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) max(((signed char)-7), (arr_21 [i_6] [i_6] [i_6])))), (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)17936)))))));
                        var_27 = ((/* implicit */unsigned long long int) max(((signed char)0), ((signed char)-15)));
                        var_28 = ((/* implicit */signed char) var_4);
                    }
                    var_29 = ((/* implicit */signed char) var_1);
                    var_30 = ((signed char) var_5);
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_31 = (-(var_8));
        var_32 = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (short)9191))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) | (1592687184066650541ULL))))));
        var_33 = ((/* implicit */unsigned int) arr_31 [i_13] [i_13] [i_13] [(signed char)6]);
        var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_13] [i_13] [i_13])), (((((/* implicit */int) (short)-9191)) + (((/* implicit */int) (signed char)15))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [(unsigned char)8])) : (((/* implicit */int) max(((short)9191), (((/* implicit */short) (signed char)7))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_13] [i_13] [i_13]))) < (0ULL))))))));
    }
    var_35 += ((/* implicit */_Bool) var_1);
}
