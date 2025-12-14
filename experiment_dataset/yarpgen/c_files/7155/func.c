/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7155
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) -4221824808775460589LL);
        var_13 = ((/* implicit */_Bool) 5643398356565821179LL);
        var_14 ^= ((/* implicit */_Bool) ((((/* implicit */int) max((var_7), (((/* implicit */signed char) (_Bool)1))))) ^ (((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_15 = ((((-5643398356565821211LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))))) * (((5643398356565821179LL) % (-5643398356565821179LL))));
        var_16 ^= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (var_8));
        arr_6 [i_1] [i_1] = ((/* implicit */short) var_8);
    }
    for (int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2 + 1] [i_2] = ((/* implicit */_Bool) (((~(5115023086161806426ULL))) ^ (((/* implicit */unsigned long long int) max((2270525987U), (((/* implicit */unsigned int) (signed char)-30)))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) var_4);
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)19);
            var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) % (var_6)));
            var_19 += ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) / (-5643398356565821179LL))) / (((/* implicit */long long int) max((2270525987U), (var_2))))));
            var_20 = ((/* implicit */_Bool) min(((unsigned char)45), (((/* implicit */unsigned char) (_Bool)0))));
        }
        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_21 += ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (var_6)));
                arr_19 [i_2 + 1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((41286987U), (((/* implicit */unsigned int) (short)-16)))))));
            }
            arr_20 [i_2] [i_2] [i_4 - 1] = ((/* implicit */unsigned short) ((405416679032662820ULL) >> (((min((((/* implicit */long long int) var_7)), ((+(-5643398356565821171LL))))) + (5643398356565821207LL)))));
            arr_21 [i_4] = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_11))))), (max((((/* implicit */long long int) (short)-4747)), (var_8)))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_22 = (!(((/* implicit */_Bool) 2024441325U)));
                        arr_27 [13ULL] [i_6 - 1] [i_6] [i_6] [i_2] [i_2] = ((/* implicit */int) ((2270525970U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -5643398356565821179LL)) || ((_Bool)1)))))));
                        var_23 += ((/* implicit */unsigned char) (signed char)24);
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 2680078618459506450LL)), (15377484871696119600ULL)));
        var_25 = ((/* implicit */short) ((max((-5643398356565821193LL), (((/* implicit */long long int) (_Bool)1)))) <= (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)10353), ((unsigned short)62540)))))));
        arr_28 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (short)-32233))))) * (var_8)));
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_26 += ((/* implicit */_Bool) 3404403153880241221LL);
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 2270525987U)) - (var_8)));
        arr_31 [i_8] = ((/* implicit */_Bool) var_7);
        arr_32 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_28 = (!(((((/* implicit */_Bool) (~(var_6)))) || (((/* implicit */_Bool) var_1)))));
    var_29 = (!(((/* implicit */_Bool) -7467450244230299239LL)));
}
