/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89569
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned short)52255);
        var_13 = ((/* implicit */unsigned char) 2144133278);
        var_14 = ((/* implicit */int) ((((-6559191713301530442LL) / (-1253839833499964358LL))) * (((/* implicit */long long int) 1580595412))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)35)) % (((((/* implicit */int) ((((/* implicit */int) (signed char)9)) <= (((/* implicit */int) (signed char)(-127 - 1)))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) != (1118265964U))))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-7)) + (((/* implicit */int) (unsigned short)32766)))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (signed char)74))));
                            var_18 = ((/* implicit */short) 3176701332U);
                        }
                    } 
                } 
            } 
        }
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1706))) - (((((1118265963U) | (3176701337U))) / (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)77)) & (-2137737567))))))));
        var_20 = 3176701332U;
        var_21 -= ((/* implicit */unsigned short) (_Bool)0);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-27)) != (((/* implicit */int) (short)8061)))))) % (11498457909755247530ULL)));
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) (_Bool)0);
        var_23 -= ((((/* implicit */long long int) 1118265960U)) % (((((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) / (5161720086580753572LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((2938515793U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53605))))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            {
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)35)) && (((758973844U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) (unsigned short)0);
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3176701332U)));
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        for (int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (int i_11 = 4; i_11 < 19; i_11 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) < (197833488U)))) > (1)))) % (((/* implicit */int) ((((1118265963U) >> (((/* implicit */int) (signed char)18)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) (signed char)-11))))) % (((/* implicit */int) (short)-1)))) == (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-22)) || (((/* implicit */_Bool) 2147483647)))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)32)) < (((/* implicit */int) (unsigned short)48519))))) > (((/* implicit */int) (signed char)7))))) - (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
