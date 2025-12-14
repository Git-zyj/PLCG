/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69301
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 975514368)) ? (-975514369) : (((/* implicit */int) (short)23199)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_3)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))))) ? (((unsigned int) ((long long int) var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 1977242158)) ? (-975514369) : (-1573778364)));
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42098)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))) >> (((((/* implicit */int) var_6)) - (71)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) ? (-975514369) : (((/* implicit */int) (signed char)-125))))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) : (4000819522814397876LL)))) : (var_11))))))));
                                var_15 = ((/* implicit */signed char) ((((-975514369) + (2147483647))) >> (((((/* implicit */int) (short)25897)) - (25896)))));
                                arr_16 [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_6)) ? (((var_9) ? (var_10) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))))));
                                arr_17 [i_2] [i_2] = ((var_9) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) -3318800964128171172LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_5) - (var_5)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 885842613U)) ? (2147483647) : (((/* implicit */int) (_Bool)0))))) >= (((((/* implicit */_Bool) -6088984877848984374LL)) ? (-2311299692868476271LL) : (2599023691714624526LL))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((_Bool) -1628760737));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7196))) : (11310194175241268793ULL)))) ? (((((/* implicit */_Bool) 1628760736)) ? (-3318800964128171172LL) : (((/* implicit */long long int) 0)))) : (((/* implicit */long long int) ((((((/* implicit */int) ((short) (unsigned short)42098))) + (2147483647))) << (((((((/* implicit */int) ((signed char) -8901404372100552826LL))) + (126))) - (4)))))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) != (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) var_7))))) : (((/* implicit */int) ((var_7) <= (((/* implicit */int) var_6)))))));
                    var_20 = ((/* implicit */int) (((_Bool)1) ? (-6088984877848984374LL) : (((/* implicit */long long int) 16U))));
                }
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
    {
        var_21 |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1628760736)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)89))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        var_22 += ((/* implicit */short) ((long long int) ((int) ((((/* implicit */_Bool) 975514367)) ? (1916369038510165796ULL) : (((/* implicit */unsigned long long int) 2147483647))))));
    }
}
