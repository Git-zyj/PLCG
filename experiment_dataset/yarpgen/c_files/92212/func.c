/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92212
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -8844598299827689554LL)) && (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 3]))))) : (((/* implicit */int) ((short) -7871568375478778392LL)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_9 [(signed char)10] [i_3] [i_3] = ((/* implicit */signed char) min((((short) arr_3 [i_2] [i_3])), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6686374691733550350ULL)) ? (3338571509299334419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_3] [i_0 - 2] [(unsigned short)21]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] [(signed char)5] = ((/* implicit */unsigned long long int) min((arr_11 [i_4]), (((/* implicit */long long int) ((922371665) <= (((/* implicit */int) (unsigned char)0)))))));
        var_13 = arr_11 [i_4];
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) arr_8 [(unsigned char)6] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((/* implicit */int) arr_3 [12U] [i_4]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned char)123))))), (min((var_7), (((/* implicit */long long int) (unsigned char)2))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                {
                    var_15 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_1))))) ? (var_5) : (((((/* implicit */_Bool) 90857241)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)19)))))));
                    arr_22 [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_4] [i_5]))))), (max((((/* implicit */unsigned long long int) var_6)), (11607406969199174544ULL)))));
                    var_16 = 9223372036854775807LL;
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ ((+(((/* implicit */int) arr_4 [i_5 - 1] [i_6 - 2]))))));
                    var_18 *= var_3;
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */signed char) (+((~(((/* implicit */int) (short)(-32767 - 1)))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) min((arr_17 [i_7] [i_7]), (arr_17 [i_7] [i_7])))))))));
        var_21 &= ((((((int) (short)-5519)) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned char)207)) ? (min((var_4), (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)86)))) + (1817911303))) - (22))));
    }
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((1168408226983680126LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (short)28120)))) << ((((~(var_8))) - (1788976117U)))));
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                {
                    var_23 &= min((((/* implicit */long long int) 2018144060)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4189373577U)) ? (arr_30 [i_10]) : (((/* implicit */unsigned long long int) arr_27 [i_10]))))) ? (arr_28 [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_31 [i_8] [i_10] [i_10])) : (((/* implicit */int) (unsigned char)2))))))));
                    arr_34 [i_8] [21LL] [i_10] [i_8] = ((/* implicit */short) ((signed char) var_4));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (unsigned short)5);
}
