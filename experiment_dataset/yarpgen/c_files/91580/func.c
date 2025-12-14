/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91580
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(arr_7 [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((long long int) (_Bool)1)))) : (((/* implicit */long long int) var_8))));
                    var_14 = ((/* implicit */long long int) var_6);
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    var_15 = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_6 [i_2 - 1] [i_2] [i_2 - 1])), (max((3875973084656177459LL), (((/* implicit */long long int) var_9)))))) - (((((/* implicit */_Bool) (-(-3875973084656177456LL)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1])) ? (-4771142427017140875LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (769390818))))))));
                }
            } 
        } 
        arr_9 [i_0] [13LL] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61415))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1))))))), (arr_1 [i_0])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */int) var_1);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_16 = ((/* implicit */signed char) arr_13 [i_3]);
            /* LoopNest 3 */
            for (unsigned int i_5 = 4; i_5 < 7; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_27 [i_3] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (~(arr_4 [i_3] [i_4])))), (var_3))), (arr_17 [i_3] [i_3] [i_3])));
                            arr_28 [i_3] [(unsigned char)3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_5 + 1] [i_5 - 4] [i_5 + 4])), (min((((((/* implicit */_Bool) (unsigned short)26844)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8))), (var_8)))));
                        }
                    } 
                } 
            } 
            arr_29 [i_4] = ((/* implicit */unsigned char) ((int) ((unsigned short) 9483462071409467030ULL)));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_21 [i_3] [i_4] [i_4] [i_4])) : (arr_2 [i_3] [i_3]))) << (((((/* implicit */int) var_10)) - (166)))))) ? (((max((arr_19 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned char)152)))) >> (((((/* implicit */int) (unsigned short)4121)) - (4070))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_12 [i_3])))) && (((/* implicit */_Bool) var_3))))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_18 = ((/* implicit */int) (+(((arr_7 [i_8]) | (((/* implicit */unsigned long long int) (~(var_6))))))));
        var_19 = 5948363597227681894LL;
        var_20 = ((/* implicit */short) min(((~(arr_6 [i_8] [i_8] [i_8]))), (((/* implicit */unsigned int) (_Bool)1))));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_31 [i_8] [i_8])), ((unsigned char)165)));
    }
    var_22 = ((/* implicit */_Bool) 2257472398569635746ULL);
    var_23 = ((/* implicit */signed char) var_2);
    var_24 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (1694233806U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((5948363597227681876LL) << (((((/* implicit */int) (_Bool)1)) - (1))))))) << (((min((((unsigned long long int) var_10)), (max((var_3), (((/* implicit */unsigned long long int) var_7)))))) - (168ULL)))));
}
