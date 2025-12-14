/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77507
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_2 [i_1 + 1])));
                    var_11 = ((/* implicit */unsigned short) ((long long int) (-(-12LL))));
                    arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) -7917065663020436151LL))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_10 [i_3])) >= (((/* implicit */int) var_8)))));
        var_13 ^= ((/* implicit */unsigned char) ((max((977440888473265618ULL), (((/* implicit */unsigned long long int) arr_10 [i_3])))) % (max((((/* implicit */unsigned long long int) -7917065663020436151LL)), (977440888473265618ULL)))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_14 -= ((/* implicit */signed char) (~(((/* implicit */int) ((17469303185236285997ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))))));
                        var_15 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_13 [i_3] [i_4 - 1])))) + (2147483647))) >> (((((arr_11 [i_5] [i_4 - 1]) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) (short)-2492)))) + (2515)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        arr_21 [i_7 + 1] = ((/* implicit */unsigned char) ((((977440888473265620ULL) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32798))))) >> (((((((/* implicit */int) ((unsigned short) (signed char)-14))) << (((((/* implicit */int) arr_20 [i_7 - 1])) - (23869))))) - (33547224)))));
        var_16 &= ((/* implicit */long long int) ((unsigned long long int) arr_13 [i_7 - 1] [i_7 - 1]));
    }
}
