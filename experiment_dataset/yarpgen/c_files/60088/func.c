/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60088
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
    var_10 = (unsigned short)7094;
    var_11 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21212))) : (min((((/* implicit */unsigned long long int) var_3)), (var_0)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_8)) == (var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-30734)) && (((/* implicit */_Bool) var_8)))))) : (var_7)));
        var_13 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-30734)) : (((/* implicit */int) (short)30733)))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))) == (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_7)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (short)4728))));
                    var_16 += ((/* implicit */unsigned short) var_1);
                    var_17 = ((/* implicit */int) var_4);
                }
            } 
        } 
    }
    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned char) var_8);
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-30734)), (min((max((4503599627370495LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((var_2), (((/* implicit */short) var_4)))))))));
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) var_8);
        var_19 ^= min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (((/* implicit */int) min(((unsigned short)65521), (((/* implicit */unsigned short) (short)4722)))))))), (min((max((((/* implicit */unsigned long long int) -8970790507609811094LL)), (var_6))), (((/* implicit */unsigned long long int) min((1912906210), (-504715500)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_20 -= ((/* implicit */unsigned long long int) (unsigned short)45194);
        arr_15 [i_4] = ((/* implicit */int) max((((/* implicit */long long int) var_3)), ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)41))) : (6586631888211434361LL))) << (((((/* implicit */int) var_4)) + (118)))))));
    }
    for (unsigned int i_5 = 3; i_5 < 17; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) 2917097085U);
                        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) ? (max((((/* implicit */unsigned long long int) var_7)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (short)-4728)) ? (max((((/* implicit */unsigned long long int) var_5)), (18446744073709551613ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (1050933297U) : (463095817U))))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) min((-504715500), (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_8)))) <= (min((((/* implicit */unsigned long long int) var_2)), (var_6)))))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((var_8), (((/* implicit */unsigned int) var_9)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) <= (max((((((/* implicit */_Bool) (unsigned short)0)) ? (var_6) : (var_6))), (max((((/* implicit */unsigned long long int) var_8)), (var_0))))))))));
    }
    var_25 *= ((/* implicit */signed char) var_6);
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_0)))) ? (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-2025)))) : (((/* implicit */int) max(((unsigned short)10692), (((/* implicit */unsigned short) var_4))))))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) (unsigned char)147)), (5195484388930504461ULL))) - (5195484388930504461ULL))))))));
}
