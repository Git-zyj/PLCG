/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57104
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [1ULL] [i_0] = var_5;
                arr_8 [i_0] [7U] [i_1 - 1] = ((/* implicit */signed char) 4104110829934418316LL);
                arr_9 [i_0] [(unsigned char)8] |= ((/* implicit */unsigned short) (-(((int) min((((/* implicit */long long int) (unsigned char)231)), (9LL))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_13 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 239152389)) ? (5824254671196204054LL) : (1868159947926508510LL)))))));
                    arr_14 [i_0] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) var_7);
                    arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5291)))))) ? (min((-1383473100), (((/* implicit */int) (unsigned char)66)))) : (-330583166))));
                    arr_16 [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((-4613081045538115291LL) | (((/* implicit */long long int) ((/* implicit */int) var_15)))))))))));
                    arr_17 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [i_2])))), ((+(((/* implicit */int) var_14))))))) ? (min((-5988321928584204118LL), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) - (2249775613739301239LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) - (((/* implicit */int) (unsigned char)190)))))));
                }
                for (long long int i_3 = 3; i_3 < 8; i_3 += 3) /* same iter space */
                {
                    arr_20 [i_3 - 3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 0LL);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)18609);
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) arr_10 [i_1] [i_3 - 1] [i_1] [i_5]);
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 3; i_6 < 8; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_32 [i_7] [i_1] [(_Bool)1] [i_1 + 1] [i_1] |= ((/* implicit */short) ((arr_28 [i_7] [i_7] [i_7]) > (min((((/* implicit */int) ((short) (unsigned char)175))), ((-(arr_28 [i_7] [i_1] [i_7])))))));
                        arr_33 [i_0] = ((((/* implicit */int) var_1)) - (((/* implicit */int) var_11)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_37 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) -6575564266761599936LL));
                        arr_38 [(signed char)2] [i_1 - 1] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (657613937354980844ULL)));
                    }
                    arr_39 [i_0] [i_0] [i_1 + 1] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6952450278660015599LL)) ? (((/* implicit */int) ((signed char) var_17))) : (((((/* implicit */_Bool) min((arr_6 [0U]), (((/* implicit */int) arr_36 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [i_6 + 1]))))));
                }
                for (long long int i_9 = 3; i_9 < 8; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        for (long long int i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            {
                                arr_48 [i_0] [i_1 - 1] [i_0] [i_10] [i_11 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)130)), (arr_28 [i_0] [i_0] [5LL])));
                                arr_49 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) var_17);
                            }
                        } 
                    } 
                    arr_50 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_47 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_47 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_47 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1])))) << (((((((/* implicit */int) min((arr_12 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]), (arr_12 [i_1 - 1] [i_1 - 1] [i_0] [i_1])))) + (131))) - (8)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_47 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_47 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_47 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1])))) << (((((((((/* implicit */int) min((arr_12 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]), (arr_12 [i_1 - 1] [i_1 - 1] [i_0] [i_1])))) + (131))) - (8))) - (72))))));
                }
                arr_51 [4ULL] [i_1 - 1] = (~(min(((-(594903593867807400LL))), (((/* implicit */long long int) -116809901)))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1383473090)))) + (6455669901692663677ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (8204492326917312306LL))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)85)))) : (((int) var_16)))))));
}
