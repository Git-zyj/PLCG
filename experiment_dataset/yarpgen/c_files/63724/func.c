/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63724
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((unsigned int) ((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (signed char)-96)) + (101))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((var_1) > (var_7))) || (((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_11);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_13)))) || ((!(((/* implicit */_Bool) 195997196U))))))) ^ ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) 432812025U)) != (8182665643600958113ULL))))))));
                            var_16 = ((/* implicit */unsigned int) 8182665643600958127ULL);
                            arr_19 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_0)), (var_5))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_7)))));
                            arr_20 [(unsigned short)6] [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((10264078430108593504ULL) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) != (10264078430108593507ULL)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_13))))))))));
                        }
                        arr_21 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((10264078430108593520ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) var_6))) >> (((((((/* implicit */unsigned long long int) var_12)) & (var_2))) - (10479053404809352283ULL))))) << (((((((((/* implicit */int) (unsigned short)0)) | (var_11))) & (((/* implicit */int) ((unsigned short) var_3))))) - (25075))))))));
                        arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)31)) << (((max((var_12), (((/* implicit */int) (unsigned char)59)))) - (44))))) * (((((/* implicit */int) ((_Bool) (short)-20464))) ^ (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        for (int i_5 = 3; i_5 < 18; i_5 += 3) /* same iter space */
        {
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((min((((/* implicit */int) var_3)), (var_11))) - (26463)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_10))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((var_7) + (((/* implicit */unsigned int) var_11)))))))));
            arr_27 [i_0] [i_5] [i_0] = ((/* implicit */short) max(((~(10264078430108593520ULL))), (((8182665643600958095ULL) + (6222270438239318431ULL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    {
                        arr_34 [i_7] [i_7] [i_5] [i_7] = ((/* implicit */_Bool) (~(743837910)));
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_3))))) ^ (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (_Bool)1)))))))) < (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)15))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)6439))) * (1895708798U)))))));
                    }
                } 
            } 
            var_20 += ((/* implicit */unsigned int) ((1ULL) - (8182665643600958112ULL)));
        }
        for (int i_8 = 3; i_8 < 18; i_8 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_0))));
            arr_38 [i_8] = ((/* implicit */unsigned short) min(((+(var_11))), ((~(((/* implicit */int) (unsigned char)196))))));
        }
        arr_39 [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
    }
}
