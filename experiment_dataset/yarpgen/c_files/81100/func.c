/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81100
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] |= (_Bool)1;
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((11732492362578283330ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15179))))))));
                var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_8))))) ? ((+(6714251711131268285ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5))))))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((((/* implicit */unsigned long long int) -2085193599)) <= (11732492362578283329ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((_Bool)1)))) : (((((/* implicit */_Bool) 6714251711131268287ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (((((~(((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (short)25354)) : (((/* implicit */int) var_2)))))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (1316)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) ((var_9) && (min(((_Bool)0), ((_Bool)0)))))) * (((((((-2085193599) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65528)) - (65516))))) * (((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_5)))))))))));
                    arr_18 [i_2] = ((/* implicit */unsigned short) min(((_Bool)0), ((_Bool)0)));
                    arr_19 [i_2] [i_2] = ((/* implicit */_Bool) var_3);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)-14248), (((/* implicit */short) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_2] [i_5] [i_6] [i_2] [i_3 - 2] = ((/* implicit */signed char) (short)-14248);
                                arr_29 [i_2] [i_6 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 4787682817691812192LL)) : (0ULL)))) ? (min((((/* implicit */long long int) (short)14629)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */int) ((signed char) min(((short)32767), (((/* implicit */short) var_7)))))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (short)-32766)), (8153817852161170732ULL)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) (-((+(var_6)))));
                    var_16 = ((/* implicit */unsigned short) var_3);
                    arr_32 [i_2] [(unsigned short)6] [(signed char)18] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767)))));
                }
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)6768)) <= (((/* implicit */int) (unsigned char)255)))) ? (min((5349774058394372681LL), (((/* implicit */long long int) (unsigned short)29619)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58767)))))) ? (8834022792058781360LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-22460)) : (((/* implicit */int) var_9)))) - (((/* implicit */int) min(((signed char)-86), (((/* implicit */signed char) var_9))))))))));
                arr_33 [i_2] [i_2] = ((/* implicit */_Bool) var_0);
                var_18 = ((/* implicit */signed char) var_6);
                arr_34 [i_2] [i_3 - 1] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) 5U)), (14174858809312205492ULL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (var_0))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_8)))))));
    var_20 &= ((/* implicit */unsigned short) var_7);
}
