/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91629
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) <= ((+(var_9)))));
    var_17 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (-(((/* implicit */int) arr_6 [i_1] [i_0] [i_2] [i_1])));
                    var_19 = ((/* implicit */int) (~((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (14043196511668115477ULL)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) == (arr_3 [i_0]))))) < (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12)))) ? (-1561233002) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((var_14) ? (((/* implicit */int) (signed char)35)) : (var_1)))))));
    }
    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
    {
        var_22 |= ((/* implicit */unsigned long long int) ((((((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)0] [i_3] [(_Bool)0] [i_3]))))) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 + 3])) : (((/* implicit */int) arr_7 [(signed char)5] [i_3 + 2] [i_3] [i_3])))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_6 [i_3] [i_3] [i_3] [i_3]))))))));
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3 - 2] [i_3 + 3]))) && ((!(arr_11 [i_3 - 1] [i_3 - 1])))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        arr_16 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) (unsigned short)65535));
        var_24 = ((/* implicit */int) var_8);
        arr_17 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)));
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            for (short i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                for (short i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(-1290130422)));
                        arr_26 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)28))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_4 [4ULL]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        arr_29 [i_8] = ((_Bool) var_7);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) (unsigned short)65515))) | (max((((/* implicit */unsigned long long int) (unsigned short)6)), (max((((/* implicit */unsigned long long int) (unsigned short)65527)), (13977432982461713961ULL))))))))));
        var_28 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_0 [i_8]))));
    }
}
