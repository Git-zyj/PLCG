/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83353
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
    var_16 = ((/* implicit */unsigned short) (+(var_1)));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)206)) : ((~(((/* implicit */int) (unsigned char)49)))))) : (((((/* implicit */_Bool) ((18350559210327292647ULL) | (((/* implicit */unsigned long long int) 447965517U))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((max((18017497301175460798ULL), (((/* implicit */unsigned long long int) var_1)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)49)), (var_9)))))))) << (((min((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)46545)))), ((-(((/* implicit */int) (unsigned char)26)))))) + (42)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (unsigned char)193)) ? (5768359190725353711LL) : (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_1])))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) * (var_13)))))), (((long long int) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned char)53)))))));
                        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -7208461202172774270LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (11887467110356996855ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) arr_5 [i_3])))), (((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) (_Bool)1)))))))));
                        var_21 = ((/* implicit */_Bool) ((((107267322457625892LL) / (((/* implicit */long long int) 1112220571)))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((min((max((-7208461202172774270LL), (((/* implicit */long long int) (short)-9885)))), (((-107267322457625893LL) & (((/* implicit */long long int) arr_8 [i_0] [i_4] [i_4] [i_5])))))), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (-5187629055851840467LL)))), ((+(var_6))))))));
                    var_23 = ((/* implicit */short) ((unsigned char) var_0));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((-2624963855453340147LL) >= (((/* implicit */long long int) var_12))))) << ((((-(arr_0 [i_0] [i_0]))) - (11136742268758341846ULL)))))) : (((/* implicit */short) ((((/* implicit */int) ((-2624963855453340147LL) >= (((/* implicit */long long int) var_12))))) << ((((((-(arr_0 [i_0] [i_0]))) - (11136742268758341846ULL))) - (10318523800938616138ULL))))));
                    var_24 &= ((/* implicit */long long int) (((((-(-4626202219580908793LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))))) < (((/* implicit */long long int) -1112220571))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((unsigned short) ((long long int) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (11140767674920678369ULL)))));
        arr_15 [i_0] = var_3;
    }
    var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7314348207692817524LL)) ? (((/* implicit */long long int) var_10)) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 107267322457625905LL)) && (((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) var_6)) ? (-3773536652037752632LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((unsigned long long int) -2381772884939794040LL))))))));
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((((var_12) ^ (((/* implicit */int) var_5)))) % (((/* implicit */int) arr_16 [i_6] [i_7])))) % ((+((-(-1084769925))))))))));
                var_28 &= ((/* implicit */signed char) var_11);
            }
        } 
    } 
}
