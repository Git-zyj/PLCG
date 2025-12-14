/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88324
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
    var_12 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 6; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) < ((~(((/* implicit */int) (unsigned char)248))))));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) % ((+(arr_4 [i_0 + 2] [i_1] [i_1 - 1] [i_2])))));
                }
            } 
        } 
        arr_9 [i_0 + 1] = ((/* implicit */unsigned char) (((~(18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_13 = (~(((((/* implicit */int) (unsigned short)63660)) >> (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])) + (81))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)1859)))) <= (((/* implicit */int) ((1127569773) <= (((/* implicit */int) (unsigned short)1861)))))))) >> (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1876)) || (((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            var_15 -= ((/* implicit */unsigned char) ((arr_14 [i_3 - 1]) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56588)))))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) + (arr_13 [i_3 - 1])));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_3])) != (13007478195135591824ULL)))) - (((/* implicit */int) ((4067473266191266758LL) != (arr_12 [i_4]))))));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8953)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)63675)) : (((/* implicit */int) (unsigned short)56582)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)60)) || (((/* implicit */_Bool) arr_15 [i_5])))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1876)) * (((/* implicit */int) (unsigned char)248))))) || (((/* implicit */_Bool) (~(3361448044543691744ULL))))));
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)130))));
            arr_21 [i_3] = ((/* implicit */_Bool) arr_20 [i_3 + 1] [i_3 - 1] [i_3 + 1]);
            var_21 = ((/* implicit */short) (~(arr_16 [i_3] [i_3 - 1] [i_6])));
            arr_22 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7)))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 + 1])));
        }
        arr_23 [i_3] = (unsigned char)12;
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (unsigned short)1861))));
        arr_24 [i_3] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)56582))));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                arr_29 [i_7 + 1] = (unsigned short)1861;
                var_25 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7 + 1])) ? (12307024435466851741ULL) : (((/* implicit */unsigned long long int) 51648560))))));
            }
        } 
    } 
}
