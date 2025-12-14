/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91031
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 591587645U)) ? (var_16) : (((/* implicit */unsigned long long int) var_4))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_19 = ((/* implicit */int) arr_4 [i_0]);
            var_20 = ((/* implicit */signed char) arr_0 [i_1]);
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_4 [i_1])));
            var_21 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
            arr_6 [i_0] = ((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))) ? (565512878981985234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_17))))));
        }
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) ? (591587645U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((((/* implicit */_Bool) arr_0 [i_0])) && (arr_2 [i_0] [i_0])))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_23 = ((/* implicit */signed char) var_1);
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2]))))) : (var_15)));
            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_3 - 1] [i_2] [i_2]))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_11 [i_3 - 1] [i_3] [i_3 - 1])))), (((var_2) ? (15183287765481791957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))))))) : (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_3 - 1]))));
            arr_14 [i_2] [i_3] [i_3 - 1] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -1589988313)) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) 1090793546U)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) var_0))), (((((/* implicit */_Bool) -600234252)) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_3 - 1])) : (arr_4 [i_2]))))) : (((/* implicit */unsigned long long int) max((max((3703379650U), (((/* implicit */unsigned int) arr_2 [i_2] [i_2])))), (((unsigned int) arr_0 [i_2]))))));
            var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])), (var_4)))) ? ((+(((/* implicit */int) arr_10 [i_3 - 1] [i_2])))) : (((((((/* implicit */_Bool) arr_4 [i_3])) ? (1589988312) : (((/* implicit */int) (unsigned short)6505)))) << (((((/* implicit */int) ((600234239) >= (((/* implicit */int) (unsigned char)102))))) - (1)))))));
            var_26 = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) << (((arr_9 [i_3] [i_3 - 1]) - (15346236476001710890ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)13885)) ? (((arr_4 [i_2]) | (arr_9 [i_3] [i_3 - 1]))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_3 - 1] [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_3]))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) << (((((arr_9 [i_3] [i_3 - 1]) - (15346236476001710890ULL))) - (3946184488982050801ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)13885)) ? (((arr_4 [i_2]) | (arr_9 [i_3] [i_3 - 1]))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_3 - 1] [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_3])))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 6; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned short) (~(min((arr_18 [i_4 - 1] [i_2] [i_5] [i_5 - 2]), (arr_18 [i_4 - 1] [i_6] [i_4 - 1] [i_5 - 1])))));
                            var_28 = (i_5 % 2 == 0) ? (((/* implicit */unsigned short) max((((arr_9 [i_5] [i_6 + 2]) % (arr_9 [i_5] [i_6 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((arr_9 [i_5] [i_6 + 3]) - (15346236476001710900ULL))))))))) : (((/* implicit */unsigned short) max((((arr_9 [i_5] [i_6 + 2]) % (arr_9 [i_5] [i_6 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((((arr_9 [i_5] [i_6 + 3]) - (15346236476001710900ULL))) - (3946184488982050789ULL)))))))));
                            var_29 = ((/* implicit */unsigned long long int) var_11);
                            var_30 = ((/* implicit */_Bool) arr_12 [i_7] [i_5] [i_7]);
                        }
                    } 
                } 
            } 
            arr_24 [i_4 - 1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2485130062U)) ? (4805980064538172713ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) ^ (((((/* implicit */_Bool) arr_19 [i_2] [i_4] [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4 - 1]))) : (var_16)))));
        }
        var_31 ^= var_5;
    }
    for (int i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        arr_27 [i_8 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8 + 1])) ? (((/* implicit */int) arr_1 [i_8] [i_8 - 2])) : (((/* implicit */int) arr_1 [i_8 - 2] [i_8 - 2]))))) ? (((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)1))))) : (((int) arr_2 [i_8] [i_8]))));
        arr_28 [i_8] = ((((/* implicit */int) arr_2 [i_8] [i_8])) == (((/* implicit */int) arr_0 [i_8 - 1])));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_30 [i_10])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_33 = ((((((/* implicit */unsigned long long int) var_4)) < (12745161809643631357ULL))) ? (((/* implicit */int) arr_2 [i_9] [i_10])) : (((/* implicit */int) (_Bool)0)));
                        var_34 = ((/* implicit */short) arr_37 [i_8] [i_10]);
                    }
                    arr_38 [i_8 - 1] [i_9] [i_10] = max((arr_4 [i_8 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_8] [i_9] [i_10])) ? (arr_34 [i_10] [i_10] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))))));
                    arr_39 [i_10] [i_9] [i_8] = max((((((/* implicit */_Bool) arr_4 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8 + 1] [i_8 + 1]))) : (arr_35 [i_8 - 2] [i_9]))), (((/* implicit */unsigned long long int) arr_26 [i_9])));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) <= (((var_14) ? (((/* implicit */int) max((var_11), (((/* implicit */short) (signed char)-46))))) : (((/* implicit */int) max((var_11), (var_10))))))));
}
